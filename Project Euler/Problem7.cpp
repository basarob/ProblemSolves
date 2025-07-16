/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
we can see that the 6th prime is 13.
What is the 10001st prime number?
*/

#include <iostream>
using namespace std;

bool is_prime(int number)
{
    int i;

    if (number <= 1)
        return false;

    else if (number == 2)
        return true;

    else if (number % 2 == 0)
        return false;

    for (i = 3; i * i <= number; i += 2)
    {
        if (number % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int i, count = 1, temp;

    for (i = 1; count <= 10001; i++)
    {
        if (is_prime(i))
            count += 1;
        temp = i;
    }

    cout << temp;
    return 0;
}