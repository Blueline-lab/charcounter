"""Char counter"""

import sys


FILE = sys.argv[1]


def charcounter(FI):
    counter = 0
    with open(FI, 'r') as filereader:
        value = filereader.readlines()
        for i in value:
            counter+=1
    return counter




#exec
print(charcounter(FILE))

