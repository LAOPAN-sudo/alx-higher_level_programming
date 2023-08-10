#!/usr/bin/python3

if __name__ == "__main__":
    """Return all names."""
    import hidden_4

    nam = dir(hidden_4)
    for name in nam:
        if name[:2] != "__":
            print(name)
