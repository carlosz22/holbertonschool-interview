#include "palindrome.h"

/**
 * is_palindrome - check if a number is a palindrome
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
int is_palindrome(unsigned long n)
{
    int remainder, reversed, original;

    reversed = 0;
    original = n;

    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (reversed == original)
        return 1;
    return 0;
}
