# Random Array Generation and Bubble Sort Implementation in C++

This repository contains a simple C++ program that generates a random array of integers and sorts it using the Bubble Sort algorithm.

## About the Code

The program consists of the following main components:

1. **RandomArray Function**: This function generates a random array of integers. It takes an array `tab[]` and its size `n` as input parameters. The `srand` function is used to seed the random number generator with the current time, ensuring different random sequences on each program run. It then fills the array with random integers between 0 and 99.

2. **Print Function**: This function prints the elements of an array. It takes an array `tab[]` and its size `n` as input parameters and iterates through the array, printing each element followed by a space.

3. **BubblekSort Function**: This function implements the Bubble Sort algorithm to sort the elements of an array in ascending order. It takes an array `T[]` and its size `n` as input parameters. The algorithm iterates through the array multiple times, comparing adjacent elements and swapping them if they are in the wrong order. This process is repeated until the array is sorted.

4. **Main Function**: In the main function, a constant `N` is defined to specify the size of the array. An integer array `A[N]` is declared. The `RandomArray` function is called to populate the array with random integers. Then, the unsorted array is printed using the `Print` function. Next, the `BubblekSort` function is called to sort the array. Finally, the sorted array is printed again to display the result.

## Usage

To use this program, simply compile and run the code. It will generate a random array of integers, sort it using the Bubble Sort algorithm, and print the unsorted and sorted arrays.

## Contribution

Contributions are welcome! If you have any suggestions, improvements, or bug fixes, feel free to open an issue or create a pull request.
