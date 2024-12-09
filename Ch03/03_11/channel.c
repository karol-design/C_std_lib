#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(0));
  long count = 0;
  for (long i = 0; i < 10000000; i++)
  {
    if (((rand() % 1000) + 1) > 500)
    {
      count++;
    }
  }
  double ratio = ((double)count * 100.00) / 10000000.00;
  printf("Result: %.3lf %%", ratio);
  return 0;
}