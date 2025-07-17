/*
.The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/

#include <iostream>
using namespace std;

bool is_prime(long long int number)
{
    long long int i;

    if (number <= 1)
        return false;
    else if (number == 2)
        return true;
    else if (number % 2 == 0)
        return false;

    for (i = 3; i * i <= number; i++)
    {
        if (number % i == 0)
            return false;
    }

    return true;
}

int main()
{
    long long int sum = 0, i;

    for (i = 0; i < 2000000; i++)
    {
        if (is_prime(i))
            sum += i;
    }

    cout << sum;
    return 0;
}