#include <stdio.h>

void display_all_student_grades() {
  int student_grades[] = {54, 67, 43, 88, 98, 65, 98, 54, 75, 34,
                          52, 75, 43, 86, 45, 97, 32, 64, 86, 34,
                          67, 75, 67, 65, 96, 54, 57, 32, 46, 75};

  int allscore = sizeof(student_grades) / sizeof(student_grades[0]);

  for (int i = 0; i < allscore; i++) {
    if ((i + i) % 20 == 0) {
      printf("\n");
    }
    printf("[%d] ", student_grades[i]);
  }
}
