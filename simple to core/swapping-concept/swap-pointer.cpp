#include <iostream>
// Function to swap two integers using pointers
void swapIntegers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    std::cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Call the swap function with pointers to the variables
    swapIntegers(&num1, &num2);

    std::cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}