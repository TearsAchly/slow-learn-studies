/*
 * Program Title: File Reading in C
 * Author: Achly
 * Date: August 2023
 * Description: This program demonstrates how to read data from a file using the `fopen` and `fgets` functions in C. 
 *              It reads the content of a file named "db.txt" and prints it to the console.
 *
 * Logic:
 *        1. Declare a file pointer `read_file` of type `FILE *`.
 *        2. Use the `fopen` function to open the file "db.txt" in read mode ("r").
 *           - If the file cannot be opened (e.g., if it doesn't exist), the program will not handle the error in its current form.
 *        3. Declare a character array `mywrite_file[100]` to hold the data read from the file.
 *        4. Use the `fgets` function to read up to 100 characters from the file and store them in the array `mywrite_file`.
 *        5. Print the content of the array using `printf`.
 *        6. Close the file using `fclose` (though currently missing in the code).
 *
 * Preconditions:
 *        - The file `db.txt` must exist in the current directory and contain some data to be read.
 *        - The file should not be empty or the program will print nothing.
 *
 * Postconditions:
 *        - The content of the file `db.txt` will be printed to the console.
 *
 * Edge Cases:
 *        - If the file `db.txt` does not exist or cannot be opened, the program will not handle the error and may crash.
 *        - If the file contains more than 100 characters, only the first 100 will be read.
 *
 * Program Flow:
 * 1. The file pointer `read_file` is declared.
 * 2. The `fopen` function is called to open the file "db.txt" in read mode.
 * 3. A character array `mywrite_file[100]` is used to store the file contents.
 * 4. The `fgets` function reads the file content and stores it in the array.
 * 5. The content of the file is printed using `printf`.
 * 6. The program ends with a return statement (without closing the file).
 */

#include <stdio.h>

int main() {

  // Declare a file pointer
  FILE *read_file;

  // Open the file "db.txt" in read mode
  read_file = fopen("./db.txt", "r");

  // Declare an array to store the data read from the file
  char mywrite_file[100];

  // Read up to 100 characters from the file
  fgets(mywrite_file, 100, read_file);

  // Print the content read from the file
  printf("%s", mywrite_file);

  // Close the file (this line should be added for good practice)
  fclose(read_file);

  return 0;
}

