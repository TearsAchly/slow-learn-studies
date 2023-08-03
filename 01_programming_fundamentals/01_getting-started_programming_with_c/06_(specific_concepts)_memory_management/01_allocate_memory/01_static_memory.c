/*
 * Program Title: Static Memory Allocation Example
 * Author: Achly
 * Date: August 2023
 * Description: This program demonstrates static memory allocation in C by
 *              declaring an array with a fixed size and printing its size and
 * memory address.
 *
 * Logic:
 *        1. Declare a global integer array `data` with a size of 20 elements.
 *        2. Use the `sizeof` operator to calculate the memory size of the array
 * in bytes.
 *        3. Print the total memory occupied by the array.
 *        4. Print the memory address of the array `data` using the `%p` format
 * specifier to represent the address.
 *
 * Preconditions:
 *        - The array `data` is statically allocated, meaning its size is fixed
 * at compile time.
 *
 * Postconditions:
 *        - The program will print the total memory occupied by the array and
 * the memory address where it is located.
 *
 * Edge Cases:
 *        - As this example uses a static array, it does not involve dynamic
 * memory allocation, hence no significant edge cases are expected.
 *
 * Program Flow:
 * 1. The global array `data[20]` is declared, and memory is allocated for it at
 * compile time.
 * 2. The program calculates the size of the array using `sizeof(data)` which
 * returns the number of bytes occupied by the array.
 * 3. The size of the array in bytes is printed.
 * 4. The memory address of the array `data` is printed using the `%p` format
 * specifier.
 * 5. The program terminates with a return statement.
 */

#include <stdio.h>

// Declare a static integer array with 20 elements
int data[20];

int main() {

  printf("The array occupies %lu bytes in memory.", sizeof(data));

  printf("\nThe memory address of the array is %p.", data);
  return 0;
}
