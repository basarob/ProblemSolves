/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two
2-digit numbers is 9009 = 91 x 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
using namespace std;

bool is_palindrome(int num)
{
    int original = num;
    int reversed = 0;

    while (num > 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    return original == reversed; // eşitse true değilse false
}

int main()
{
    int maxproduct = 0, i, j, product = 0;

    for (i = 100; i <= 999; i++)
    {
        for (j = 100; j <= 999; j++)
        {
            product = i * j;

            if (is_palindrome(product) && product > maxproduct)
            {
                maxproduct = product;
            }
        }
    }

    cout << maxproduct;
    return 0;
}
