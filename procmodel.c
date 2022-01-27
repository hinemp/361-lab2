#include <stdlib.h>

#include "effects.h"
#include "procmodel.h"
#include "statemodel.h"

/* Initialize FSM to contain pointers to transition table, effect table,
   and entry actions. Also set the live, runtime, and state values to
   defaults. Return true if successful. Return false if anything fails
   or cannot be set successfully. */
fsm_t *
process_init (void)
{
  return NULL;
}

// TODO: Complete this table mapping state/events to the target state
static state_t const _transitions[NUM_STATES][NUM_EVENTS] = {
  // ADMIT DISPATCH SCHEDULE BLOCK UNBLOCK EXIT KILL NIL
  { RDY, NST, NST, NST, NST, NST, TRM, NST }, // NEW
  { NST, NST, NST, NST, NST, NST, NST, NST }, // READY
  { NST, NST, NST, NST, NST, NST, NST, NST }, // RUNNING
  { NST, NST, NST, NST, NST, NST, NST, NST }, // BLOCKED
  { NST, NST, NST, NST, NST, NST, NST, NST }  // TERM
};

// TODO: Create a table mapping states/events to the effect functions

// TODO: Create an array of action_t to map each state to its entry function
