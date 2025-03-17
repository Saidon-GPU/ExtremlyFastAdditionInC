#include <fast_addition.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SGN(x) ((x) < 0 ? -1 : 1)

int fast_addition(int a, int b) {
  const int l = 0;
  int i, res = a;

  if (SGN(x) < 0) --l;
  else ++l;
  
  for (i = 0; i < ABS(b); i++ {
    res = res + l;
  }

  return res;
}
