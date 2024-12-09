#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int count)
{
  while (count--)
    printf("  %i  ", *(arr++));
  printf("\n");
}

// Compare function
// Find function

int compare_nums(const void *p1, const void *p2)
{
  if (*(int *)p1 == *(int *)p2)
  {
    return 0;
  }
  int comparison = ((*(int *)p1 < *(int *)p2) ? -1 : 1);
  return comparison;
}

void main()
{
  int nums[10] = {9, 5, 7, 1, 8, 5, 10, 12, 4, 2};
  int d_size = sizeof(int);
  int a_size = sizeof(nums) / d_size;

  // Print Array
  print_array(nums, a_size);
  // Sort Array
  qsort(nums, sizeof(nums) / sizeof(*nums), sizeof(*nums), compare_nums);
  // Print again
  print_array(nums, a_size);
  // Search for a number in the array
  const int key = 10;
  int *result = (int *)bsearch((const void *)(&key), nums, sizeof(nums) / sizeof(*nums), sizeof(*nums), compare_nums);
  if (result == NULL)
  {
    printf("Key not found in the array!\n");
  }
  else
  {
    printf("Key found in the array at the address 0x%p (Position %d)\n", result, result - nums);
  }
  // Search for a number NOT in the array
  const int key_b = 40;
  result = (int *)bsearch((const void *)(&key_b), nums, sizeof(nums) / sizeof(*nums), sizeof(*nums), compare_nums);
  if (result == NULL)
  {
    printf("Key not found in the array!\n");
  }
  else
  {
    printf("Key found in the array at the address 0x%p (Position %d)\n", result, result - nums);
  }
}