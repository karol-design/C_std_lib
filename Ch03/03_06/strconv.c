#include <stdio.h>
#include <stdlib.h>

void main()
{
  // Part 1: atoi
  char str1[10] = "572";

  // Part 2: strtol
  char str2[10] = " 123  3A ";
  char *end = str2;
  long num;
  printf("Int 1: %ld\n", strtol(str2, &end, 10));
  printf("Int 2: %lX\n", strtol(end, &end, 16));

  // Part 3: sscanf
  int a, b;
  sscanf(str2, " %d %X ", &a, &b);
  printf("A = %d, B = %d", a, b);
}