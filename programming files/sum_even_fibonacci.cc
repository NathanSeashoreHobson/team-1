#include <iostream>

int main()
{
    // Set initial Fibonacci Numbers
    int a = 0, b = 1;
    int sum_even = 0;
    // Sum even Fibonacci Numbers
    while (b < 4000000) {
        if (b % 2 == 0) {
            sum_even += b;
        }
        // Update Fibonacci Numbers
        int temp = b;
        b = a + b;
        a = temp;
    }
    // Print out sum
    std::cout << sum_even << std::endl;

    return 0;
}

// answer should be 4613732
