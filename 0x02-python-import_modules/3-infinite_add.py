#!/usr/bin/python3

if __name__ == "__main__":
    """Return addition of all arguments."""
    from sys import argv

    total = 0

    for arg in argv[1:]:
        total += int(arg)

    print(total)
