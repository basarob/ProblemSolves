/*2520 is the smallest number that can be divided by each of the numbers from
1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible
divisible with no remainder by all of the numbers from 1 to 20?
*/

#include <iostream>
using namespace std;

bool is_divided(int number);

int main()
{
    int number = 1;

    while (true)
    {
        if (is_divided(number))
        {
            cout << number;
            break;
        }
        else
            number += 1;
    }

    return 0;
}

bool is_divided(int number)
{
    int i;

    for (i = 1; i <= 20; i++)
    {
        if ((number % i) != 0)
            return false;
    }

    return true;
}