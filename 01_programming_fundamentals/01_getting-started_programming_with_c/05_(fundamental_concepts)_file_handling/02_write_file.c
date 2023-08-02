/*
 * Program Title: File Writing in C
 * Author: Achly
 * Date: August 2023
 * Description: This program demonstrates how to create and write data to a file using the fopen and fprintf functions in C.
 *              It writes the word "test" to a file named "db.txt".
 *
 * Logic:
 *        1. Declare a file pointer write_file of type FILE *.
 *        2. Use the fopen function to open (or create) the file "db.txt" in write mode ("w").
 *           - If the file already exists, its contents will be overwritten.
 *        3. Use the fprintf function to write the string "test" into the file.
 *        4. Close the file to ensure the written data is saved and the file resources are released.
 *
 * Preconditions:
 *        - The file db.txt will be created in the directory where the program is run.
 *
 * Postconditions:
 *        - The file db.txt will contain the word "test".
 *
 * Edge Cases:
 *        - If the file cannot be opened due to permissions or file system issues, fopen will return NULL, though the program does not currently handle such errors.
 *
 * Program Flow:
 * 1. The file pointer write_file is declared.
 * 2. The fopen function is called to open the file in write mode.
 * 3. The fprintf function is used to write the string "test" to the file.
 * 4. The file is closed using fclose to ensure the data is saved and the resources are released.
 * 5. The program ends with a return 0.
 */

#include <stdio.h>

int main() {

  // Declare a file pointer
  FILE *write_file;

  // Open (or create) the file "db.txt" in write mode
  write_file = fopen("./db.txt", "w");

  // Write the string "test" into the file
  fprintf(write_file, "test");

  // Close the file to save and release resources
  fclose(write_file);

  return 0;
}
