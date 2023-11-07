# Prime Number Checker

This C++ program checks whether a given number is prime or not. It includes a `main` function, which serves as the entry point for the program, and a helper function `isPrime` that performs the actual prime-checking logic.

## Table of Contents

- [Getting Started](#getting-started)
- [How It Works](#how-it-works)
- [Usage](#usage)
- [Example](#example)

## Getting Started

To use this program, you need a C++ compiler, such as g++, installed on your system.

## How It Works

The `isPrime` function takes an integer `n` as input and returns `true` if the number is prime, or `false` if it is not. Here's how the `isPrime` function works:

- It returns `false` if the input number is less than or equal to 1 since prime numbers are defined as greater than 1.

- It checks for factors of the input number by iterating from 2 to half of the number.

- If the input number is divisible by any number in this range, the function returns `false` since prime numbers have only two factors, 1 and themselves.

- If no factors are found in the specified range, the function returns `true`, indicating that the number is prime.

## Usage

To use the program, follow these steps:

1. Replace the number `66049` in the `main` function with the value you want to check for primality.

2. Compile the code using a C++ compiler. For example, if you have g++ installed, you can compile the code with the following command:

   ```shell
   g++ prime_checker.cpp -o prime_checker
   ```

3. Run the compiled executable:

   ```shell
   ./prime_checker
   ```

4. The program will display either "prime" or "not prime" based on the result of the `isPrime` function for the provided input.

## Example

Suppose you want to check if the number 17 is prime. Here's how you can use the program:

```cpp
if (isPrime(17)) {
    cout << "prime" << endl;
} else {
    cout << "not prime" << endl;
}
```

When you run the program with this code, it will output "prime" because 17 is a prime number.

Feel free to replace `17` with any other integer you want to check for primality.
