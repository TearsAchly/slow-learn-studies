/*
 * File: ticket.c
 * Description: Implementation of functions for creating and displaying 
 *              ticket information in the ticket booking system.
 */

#include "../include/ticket.h"
#include "../include/available_seats.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SEATS 10

typedef struct {
  char name[50];       // Name of the ticket holder
  int uniq_number;     // Unique ticket number
  int seats;           // Seat number reserved
} ticket;

ticket generate_ticket; // Global variable to hold ticket information
extern int reserved_seats[]; // Array to keep track of reserved seats

void create_ticket() {
  srand(time(NULL)); // Seed random number generator

  printf("\nEnter your name: ");
  scanf("%s", generate_ticket.name); // Read user's name

  // Generate a random unique ticket number
  generate_ticket.uniq_number = rand();
  printf("Your Ticket Number: %d\n", generate_ticket.uniq_number);

  int seat_available = 0; // Flag to track seat availability

  // Keep asking for a seat until a valid one is chosen
  while (!seat_available) {
    printf("Please choose a seat number (1 to %d): ", MAX_SEATS);
    scanf("%d", &generate_ticket.seats); // Read chosen seat number

    // Check if the chosen seat is already reserved
    if (generate_ticket.seats < 1 || generate_ticket.seats > MAX_SEATS) {
      printf("Invalid seat number. Please choose a number between 1 and %d.\n",
             MAX_SEATS);
    } else if (reserved_seats[generate_ticket.seats - 1] == 1) {
      printf(
          "The seat has already been reserved. Please choose another seat.\n");
    } else {
      reserved_seats[generate_ticket.seats - 1] = 1; // Mark seat as reserved
      seat_available = 1; // Exit loop as a valid seat has been chosen
    }
  }
}

void result_ticket() {
  printf("\n************ TICKET DETAILS ************\n");
  printf("Name: %s\n", generate_ticket.name);
  printf("Unique Ticket Number: %d\n", generate_ticket.uniq_number);
  printf("Seat Number: %d\n", generate_ticket.seats);
  printf("*****************************************\n");
}

