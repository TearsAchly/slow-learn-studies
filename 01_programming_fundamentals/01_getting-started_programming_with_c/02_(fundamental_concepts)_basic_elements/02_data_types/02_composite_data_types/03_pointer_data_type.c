/*
 * Program Title: Pointer Usage Example
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates how to use pointers in C by
 *              showing the address and dereferenced value of a variable.
 *
 * Logic:
 *        1. Declare an integer variable `age` and initialize it to 20.
 *        2. Declare a pointer variable `pointer` and assign it the address of `age` using the address-of operator (`&`).
 *        3. Print the value of `age` directly and then print the value of `age` using the pointer by dereferencing it with `*pointer`.
 *        4. Print the memory address of `age` stored in the pointer variable using `%p` format specifier.
 *        5. Print the memory address of `age` again by dereferencing the pointer and printing the address of the dereferenced value.
 *
 * Preconditions:
 *        - The variable `age` must be initialized before the pointer is assigned to it.
 *
 * Postconditions:
 *        - The program will print:
 *            1. The value of `age`.
 *            2. The value of `age` using pointer dereferencing.
 *            3. The memory address where `age` is stored, printed via the pointer.
 *            4. The memory address of the dereferenced pointer value, which is the same as the address of `age`.
 *
 * Edge Cases:
 *        - As the program involves basic pointer usage, no significant edge cases are expected unless the pointer is uninitialized or misused.
 *
 * Program Flow:
 * 1. The integer variable `age` is declared and initialized with the value 20.
 * 2. The pointer `pointer` is assigned the address of `age`.
 * 3. The value of `age` is printed directly using `printf` with `%d`.
 * 4. The pointer is dereferenced to print the value stored at the address it points to (i.e., the value of `age`).
 * 5. The memory address of `age` is printed using the pointer and `%p` format specifier.
 * 6. The memory address of `age` is printed again by dereferencing the pointer and printing the address of the dereferenced value.
 * 7. The program terminates.
 */

#include <stdio.h>

int main() {

  // Declare an integer variable and a pointer
  int age = 20;
  int *pointer = &age;

  // Print the value of 'age' directly
  printf("The value of 'age' is: %d\n", age);          // Output: 20

  // Print the value of 'age' using the pointer
  printf("The value of 'age' using pointer dereferencing is: %d\n", *pointer);     // Output: 20

  // Print the address of 'age' using the pointer
  printf("The memory address of 'age' is: %p\n", (void*)pointer);      // Output: Memory address of 'age'

  // Print the address of 'age' by dereferencing the pointer
  printf("The memory address of 'age' via dereferencing pointer is: %p\n", (void*)&*pointer);    // Output: Memory address of 'age'

  return 0;
}
