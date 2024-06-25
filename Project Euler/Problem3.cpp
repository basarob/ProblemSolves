/*.
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143?
*/
#include <iostream>

using namespace std;

bool is_prime(long long int num);
void largest_prime_factor(long long int num);

int main()
{
    long long int num = 600851475143;
    largest_prime_factor(num);

    return 0;
}

bool is_prime(long long int num) // Asallık kontrolü
{
    long long int i;

    if (num <= 1) // sayı 1 ise asal değil
        return false;
    if (num == 2) // sayı 2 ise asal
        return true;
    if ((num % 2) == 0) // sayı çift ise asal değil
        return false;

    for (i = 3; i <= (num / 2); i += 2) // sayının yarısına kadar tüm tek sayılara böl
    {
        if ((num % i) == 0) // sayı bölünüyorsa asal değil
            return false;
    }
    return true; // sayı bölünmüyorsa asal
}

void largest_prime_factor(long long int num) // Bölen kontrol
{
    int i;

    for (i = 1; i <= (num / 2); i++) // Ana sayının yarısına kadar tüm bölenliği kontrol et
    {
        if ((num % i) == 0) // eğer i bölen ise
        {
            if (is_prime(i) == true) // eğer i asal ise
                cout << i << endl;   // i yi ekrana bas
        }
    }
}