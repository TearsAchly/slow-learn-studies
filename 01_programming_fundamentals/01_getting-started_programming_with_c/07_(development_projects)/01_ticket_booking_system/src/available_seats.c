/*
 * File: available_seats.c
 * Description: Implementation of functions for managing available seats in
 *              the ticket booking system.
 */

#include "../include/available_seats.h"
#include "../include/ticket.h"
#include <stdio.h>

#define MAX_SEATS 10 // Define the maximum number of seats

int reserved_seats[MAX_SEATS] = {0}; // Array to track reserved seats

void available_seats() {
  printf("\n************ AVAILABLE SEATS ************\n");
  printf("Available Seats: ");
  for (int index_seats = 0; index_seats < MAX_SEATS; index_seats++) {
    if (reserved_seats[index_seats] == 0) {
      printf("[%d] ", index_seats + 1); // Display available seat numbers
    }
  }
  printf("\n******************************************\n");
}

void reset_seats() {
  for (int i = 0; i < MAX_SEATS; i++) {
    reserved_seats[i] = 0; // Reset all seats to available
  }
}

