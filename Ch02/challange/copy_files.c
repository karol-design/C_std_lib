// This application is for copying one text file to another
#include <stdio.h>
#include <stdlib.h>

#define FILENAME_MAX_SIZE 20

int main()
{
  char src_filename[FILENAME_MAX_SIZE];
  char dst_filename[FILENAME_MAX_SIZE];
  printf("Please specify the name of the source file... ");
  scanf("%19s", src_filename);  // Max 19 chracters and terminate at a new line character

  printf("Please specify the name of the destination file... ");
  scanf("%19s", dst_filename);  // Max 19 chracters and terminate at a new line character

  // Open the source file
  FILE* src_file = fopen(src_filename, "r");
  if (src_file == NULL)
  {
    fprintf(stderr, "Error opening the src file...\n");
    exit(EXIT_FAILURE);
  }

  // Open the destination file
  FILE* dst_file = fopen(dst_filename, "w");
  if (dst_file == NULL)
  {
    fprintf(stderr, "Error opening the dst file...\n");
    exit(EXIT_FAILURE);
  }

  char c = fgetc(src_file);
  while (c != EOF)
  {
    int ret = fputc(c, dst_file);
    if (ret == EOF)
    {
      fprintf(stderr, "Error writing to a file...\n");
      exit(EXIT_FAILURE);
    }
    c = fgetc(src_file);
  }

  return 0;
}

//   printf;
//   sprintf;
//   fprintf;
//   scanf;
//   sscanf;
//   fscanf;

//   getchar;
//   getc;

//   putchar;
//   putc;
//   fputc;
//   fputchar;

//   gets;
//   fgets;
//   puts;
//   fputs;