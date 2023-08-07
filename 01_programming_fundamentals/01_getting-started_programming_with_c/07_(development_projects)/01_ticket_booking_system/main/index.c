/*
 * File: index.c
 * Description: Main file for the ticket booking system. This file provides 
 *              the user interface for checking available seats, ordering 
 *              tickets, and exiting the system.
 */

#include "../include/available_seats.h"
#include "../include/ticket.h"
#include <stdbool.h>
#include <stdio.h>

int main() {
  int loop = true; // Control variable for the main menu loop
  while (loop) {
    int chose; // Variable to store user choice
    printf("\n\n************ MENU ************\n");
    printf("1. Check Available Seats\n");
    printf("2. Order Tickets\n");
    printf("3. Exit\n");
    printf("*******************************\n");
    printf("Please choose an option: ");
    scanf("%d", &chose); // Read user choice

    switch (chose) {
    case 1:
      available_seats(); // Call function to display available seats
      break;
    case 2:
      create_ticket(); // Call function to create a ticket
      result_ticket(); // Call function to display ticket details
      break;
    case 3:
      loop = false; // Exit the loop
      printf("\nExiting the system...\n");
      reset_seats(); // Reset seats before exiting
      break;
    default:
      printf("\nInvalid input. Please try again.\n"); // Handle invalid input
    }
  }
  return 0; // Return success
}

