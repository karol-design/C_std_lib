#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char string[30] = "";
  char keyword[30] = "";
  printf("Please specify the sententence: ");
  scanf("%29[^'\n']s", string);
  printf("And the keyword: ");
  scanf("%29s", keyword);

  char* keyword_location = strstr(string, keyword);
  if (keyword_location == NULL)
  {
    fprintf(stderr, "Error: no keyword found in the sentence!");
    exit(EXIT_FAILURE);
  }

  size_t remainning_chars = strchr(string, '\0') - keyword_location;
  memmove(keyword_location, keyword_location + strlen(keyword), remainning_chars);
  printf("New sentence: %s", string);
  return 0;
}