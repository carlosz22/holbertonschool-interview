#!/usr/bin/python3

"""UTF-8 Validation"""


def validUTF8(data):
    """
    Determines if a given data set represents
     a valid UTF-8 encoding
        - Return: True if data is a valid UTF-8 encoding, else return False
        - A character in UTF-8 can be 1 to 4 bytes long
        - The data set can contain multiple characters
        - The data will be represented by a list of integers
        - Each integer represents 1 byte of data, therefore you only
         need to handle the 8 least significant bits of each integer
    """

    n_bytes = 0

    for num in data:
        binary = format(num, '#010b')[-8:]

        if n_bytes == 0:

            for bit in binary:
                if bit == '0':
                    break
                n_bytes += 1

            if n_bytes == 0:
                continue

            if n_bytes == 1 or n_bytes > 4:
                return False
        else:
            if not (binary[0] == '1' and binary[1] == '0'):
                return False
        n_bytes -= 1

    return n_bytes == 0
