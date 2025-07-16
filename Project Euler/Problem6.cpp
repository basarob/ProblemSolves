/*
.The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385.
.The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025.
Hence the difference between the sum of the squares of the first ten natural numbers and the
square of the sum is 3025 - 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers
and the square of the sum.
*/

#include <iostream>
using namespace std;

int sum_of_sq()
{
    int i, result = 0;

    for (i = 1; i <= 100; i++)
    {
        result += i * i;
    }

    return result;
}

int sq_of_sum()
{
    int i, sum = 0;
    int result = 0;

    for (i = 1; i <= 100; i++)
    {
        sum += i;
    }

    return result = sum * sum;
}

int main()
{
    cout << sq_of_sum() - sum_of_sq();
    return 0;
}