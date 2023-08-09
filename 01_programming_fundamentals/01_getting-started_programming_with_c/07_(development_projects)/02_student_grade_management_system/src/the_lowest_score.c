/*
 * File: the_lowest_score.c
 * Description: Implementation of a function to find and display the lowest score
 *              among student grades.
 */


#include "../include/all_student_grades.h"
#include <stdio.h>

extern int student_grades[];
extern int all_score;

void lowest_score() {
    int min = student_grades[0];
    for (int i = 0; i < all_score; i++) {
        if (student_grades[i] < min) {
            min = student_grades[i];
        }
    }
    printf("Lowest Score: %d\n", min); // Clearly label the output
}

