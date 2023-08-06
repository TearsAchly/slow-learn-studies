#include "../include/ticket.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
  char name[50];
  int uniq_number;
  int seats;
} ticket;

ticket generate_ticket;

void create_ticket() {
  // Seed the random number generator with the current time
  srand(time(NULL));

  printf("\nEnter name: ");
  scanf("%s", generate_ticket.name);

  // Generate a random unique number
  generate_ticket.uniq_number = rand();
  printf("Ticket number: %d\n", generate_ticket.uniq_number);

  printf("Choose seat number: ");
  scanf("%d", &generate_ticket.seats);
}

void result_ticket() {
  printf("\nname : %s\nunique number : %d\nseat number : %d\n", generate_ticket.name, generate_ticket.uniq_number,
         generate_ticket.seats);
}
