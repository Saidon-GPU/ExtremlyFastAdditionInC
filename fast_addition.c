#include <fast_addition.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SGN(x) ((x) < 0 ? -1 : 1)

int fast_addition(int a, int b) {
  int l = 0; // Variable to determine the increment/decrement step based on the sign of b.
  int i, res = a; // Initialize 'res' to the value of 'a'. 'i' will be used as a loop counter.

  // Determine the direction of addition/subtraction based on the sign of 'b'.
  if (SGN(b) < 0) --l; // If 'b' is negative, set 'l' to -1 (decrement step).
  else ++l; // Otherwise, set 'l' to +1 (increment step).

  // Loop to add/subtract 'l' to/from 'res' a total of |b| times.
  for (i = 0; i < ABS(b); i++) {
    res = res + l; // Increment or decrement 'res' by 'l' in each iteration.
  }

  return res; // Return the final result after completing the loop.
}
