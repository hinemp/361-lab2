#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "effects.h"
#include "procmodel.h"
#include "statemodel.h"

/* Generic front-end for handling events. Should do nothing more
   than calling the appropriate *_event function based on the type. */
void
handle_event (fsm_t *fsm, event_t event)
{
  // Event and state names for printing out
  static const char *event_names[]
      = { "ADMIT",   "DISPATCH", "SCHEDULE", "BLOCK",
          "UNBLOCK", "EXIT",     "KILL",     "NIL" };
  static const char *state_names[]
      = { "NEW", "RDY", "RUN", "BLK", "TRM", "NST" };
  // TODO: Use the following format string to print the current
  // state name, state name, the event name, and the new state
  // name for valid transitions.
  // printf ("%s.%s -> %s\n", ...);
}
