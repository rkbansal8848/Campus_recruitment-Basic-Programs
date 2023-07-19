#include <iostream>

void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        std::cout << "2 ";
        n = n / 2;
    }

    // n must be odd at this point. So we can skip one element (i.e., i += 2) in the loop
    for (int i = 3; i * i <= n; i += 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            std::cout << i << " ";
            n = n / i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2)
    {
        std::cout << n << " ";
    }
}

int main()
{
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    std::cout << "Prime factors of " << number << " are: ";
    primeFactors(number);

    return 0;
}