#!/usr/bin/python3
"""
Minimum Operations
"""

def minOperations(n):
    """Minimum Operations"""
    oper = 0
    i = 2
    while (i <= n):
        while (n % i == 0):
            oper += i
            n = n / i
        i += 1
    return oper
