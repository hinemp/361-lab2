/*
 * CS 361: Template lab driver
 *
 * Name:
 */

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "procmodel.h"
#include "statemodel.h"

void
usage (void)
{
  printf ("fsm, a state model simulator\n\n");
  printf ("usage: fsm [evt1 evt2 ...]\n");
  printf (
      "evt1 evt2 ... is a sequence of event combinations. Each event is\n");
  printf ("represented by an int value:\n\n");
  printf ("  ADMIT = 0\n");
  printf ("  DISPATCH = 1\n");
  printf ("  SCHEDULE = 2\n");
  printf ("  BLOCK = 3\n");
  printf ("  UNBLOCK = 4\n");
  printf ("  EXIT = 5\n");
  printf ("  KILL = 6\n");
  printf ("  NIL = 7\n");
}

int
main (int argc, char **argv)
{
  // With no arguments, show usage and exit
  if (argc < 2)
    {
      usage ();
      return EXIT_FAILURE;
    }

  // Declare and initialize a FSM
  fsm_t *process = process_init ();
  if (process == NULL)
    return EXIT_FAILURE;


  // TODO: Replace this with a loop for all events.
  int arg_counter = 0;
  while (arg_counter < argc) {
    // Parse to int
    event_t curr = atoi(argv[arg_counter]);
    // state.event -> new state
    // state.
    switch (process->state)
    {
      case NEW:
        printf("NEW.");
        break;
      case RDY:
        printf("RDY.");
        break;
      case RUN:
        printf("RUN.");
        break;
      case BLK:
        printf("BLK.");
        break;
      case TRM:
        printf("TRM.");
        break;
      case NST:
        printf("NST.");
        break;
    default:
      break;
    }
    // event -> 
    switch (curr)
    {
      case ADMIT:
        printf("ADMIT -> ");
        break;
      case DISPATCH:
        printf("DISPATCH -> ");
        break;
      case SCHEDULE:
        printf("SCHEDULE -> ");
        break;
      case BLOCK:
        printf("BLOCK -> ");
        break;
      case UNBLOCK:
        printf("UNBLOCK -> ");
        break;
      case EXIT:
        printf("EXIT -> ");
        break;
      case KILL:
        printf("KILL -> ");
        break;
      case NIL:
        printf("NIL -> ");
        break;
    }
    // New state
    switch (process->state)
    {
      case NEW:
        printf("NEW\n");
        break;
      case RDY:
        printf("RDY\n");
        break;
      case RUN:
        printf("RUN\n");
        break;
      case BLK:
        printf("BLK\n");
        break;
      case TRM:
        printf("TRM\n");
        break;
      case NST:
        printf("NST\n");
        break;
    default:
      break;
    }
    handle_event(process, curr);
    arg_counter++;
  }

  // Under normal runs, we should always end in TRM state
  if (process->state != TRM)
    {
      free (process);
      return EXIT_FAILURE;
    }

  free (process);
  return EXIT_SUCCESS;
}
