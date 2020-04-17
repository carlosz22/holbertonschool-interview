#!/usr/bin/python3

"""Solution for Lockboxes problem"""


def canUnlockAll(boxes):
    """Solution for Lockboxes problem"""

    keys = set()
    for i in range(len(boxes)):
        if (i not in keys and i != 0):
            return False
        for elem in boxes[i]:
            keys.update(boxes[elem])
        keys.update(boxes[i])

    return True
