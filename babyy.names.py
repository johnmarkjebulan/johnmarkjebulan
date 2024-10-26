import sys
import re
import os
import glob  # Import the glob module

def extract_names(filename):
    """
    Extracts the year and names-rank from the given file.
    """
    names = []

    # Open and read the file.
    with open(filename, 'rt', encoding='utf-8') as f:
        text = f.read()

    # Extract the year.
    year_match = re.search(r'Popularity\sin\s(\d{4})', text)
    if not year_match:
        sys.stderr.write(f"Couldn't find the year in {filename}\n")
        sys.exit(1)

    year = year_match.group(1)
    names.append(year)

    # Extract the name-rank tuples
    tuples = re.findall(r'<td>(\d+)</td><td>(\w+)</td><td>(\w+)</td>', text)

    # Store the names and ranks in a dictionary
    names_to_rank = {}
    for rank, boyname, girlname in tuples:
        if boyname not in names_to_rank:
            names_to_rank[boyname] = rank
        if girlname not in names_to_rank:
            names_to_rank[girlname] = rank

    # Sort the names alphabetically and add the rank
    sorted_names = sorted(names_to_rank.keys())
    for name in sorted_names:
        names.append(f"{name} {names_to_rank[name]}")

    return names

def write_summary_to_file(filename, summary_text):
    summary_filename = filename + '.summary'
    with open(summary_filename, 'w', encoding='utf-8') as summary_file:
        # Write the summary in a format suitable for grep
        summary_file.write('\n'.join(summary_text) + '\n')

def main():
    args = sys.argv[1:]

    if not args:
        print('usage: file [file ...]')
        sys.exit(1)

    # Process each file passed as arguments
    for pattern in args:
        # If the argument is a pattern (e.g., "baby*.html"), use glob to find matching files
        if '*' in pattern:
            filenames = glob.glob(pattern)
        else:
            filenames = [pattern] if os.path.isfile(pattern) else []

        for filename in filenames:
            if os.path.isfile(filename):
                names = extract_names(filename)
                
                # Write summary to a new file
                write_summary_to_file(filename, names)
            else:
                print(f"File not found: {filename}")

if __name__ == '__main__':
    main()
