/*
 * File: the_highest_score.c
 * Description: Implementation of a function to find and display the highest score
 *              among student grades.
 */

#include "../include/all_student_grades.h"
#include <stdio.h>

extern int student_grades[];
extern int all_score;

void highest_score() {
    int max = student_grades[0]; // Initialize max with the first score
    for (int i = 1; i < all_score; i++) { // Start from 1 to compare with max
        if (student_grades[i] > max) {
            max = student_grades[i]; // Update max if current grade is higher
        }
    }
    printf("Highest Score: %d\n", max); // Clearly label the output
}
