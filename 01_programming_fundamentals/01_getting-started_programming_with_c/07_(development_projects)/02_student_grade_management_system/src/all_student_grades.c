/*
 * File: all_student_grades.c
 * Description: Implementation of functions to display all student grades.
 */

#include <stdio.h>

int student_grades[] = {54, 67, 43, 88, 98, 65, 98, 54, 75, 34,
                        52, 75, 43, 86, 45, 97, 32, 64, 86, 34,
                        67, 75, 67, 65, 96, 54, 57, 32, 46, 75};

int all_score = sizeof(student_grades) / sizeof(student_grades[0]);

void display_all_student_grades() {
    printf("All Student Grades:\n");
  
    for (int i = 0; i < all_score; i++) {
        printf("[%d] ", student_grades[i]); // Display each grade
        if ((i + 1) % 10 == 0) { // Adjust based on how many you want in one line
            printf("\n"); // New line after every 10 grades for better readability
        }
    }
    printf("\n"); // New line after displaying all grades
}

