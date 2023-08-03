/*
 * Program Title: Dynamic Memory Allocation and Reallocation Example
 * Author: Achly
 * Date: August 2023
 * Description: This program demonstrates dynamic memory allocation using 
 *              `malloc` and memory reallocation using `realloc` in C.
 *
 * Logic:
 *        1. Allocate memory for 4 integers using `malloc`.
 *        2. Check if memory allocation was successful.
 *        3. Reallocate the memory block to hold 8 integers using `realloc`.
 *        4. Check if reallocation was successful, and print the new memory location.
 *        5. Free the dynamically allocated memory to prevent memory leaks.
 *
 * Preconditions:
 *        - Memory must be successfully allocated before using it.
 *        - Memory must be freed after it is no longer needed.
 *
 * Postconditions:
 *        - The program will print:
 *            1. The memory address and size of the initially allocated memory.
 *            2. The memory address and size after reallocation.
 *        - Memory will be freed at the end to avoid memory leaks.
 *
 * Edge Cases:
 *        - If `malloc` or `realloc` fails, an error message will be displayed, 
 *          and the program will exit.
 *
 * Program Flow:
 * 1. The program allocates memory for 4 integers using `malloc`.
 * 2. It checks if the memory allocation was successful.
 * 3. If successful, it prints the size and location of the allocated memory.
 * 4. The program then reallocates memory to store 8 integers using `realloc`.
 * 5. It checks if the reallocation was successful.
 * 6. If successful, it prints the new size and location of the reallocated memory.
 * 7. The program frees the memory using `free` to prevent memory leaks.
 * 8. The program terminates.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

  int *memory, *reememory;

  // Initial memory allocation of 4 * sizeof(int)
  int size = 4 * sizeof(*memory);
  memory = malloc(size);

  // Check if the allocation was successful
  if (memory == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }

  printf("Initial allocation: %d bytes at %p\n", size, memory);

  // Reallocating memory to 8 * sizeof(int)
  size = 8 * sizeof(*reememory);
  reememory = realloc(memory, size);

  // Check if the reallocation was successful
  if (reememory == NULL) {
    printf("Memory reallocation failed!\n");
    free(memory); // Ensure the old memory is freed
    return 1;
  }

  printf("After reallocation: %d bytes at %p\n", size, reememory);

  // Free the memory after it’s no longer needed
  free(reememory);

  return 0;
}

