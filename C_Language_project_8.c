#include <stdio.h>
#include <stdlib.h>
#define SLEN 81

char ch;
FILE * f_input;
FILE * f_output;

int main(void) {
  char name;
  puts("Enter the name of the input file");
  f_input = fopen(name, "a");

  if (f_input == NULL)
  {
    puts("sorry this file cannot be read, try another value.\n");
  }
  else
  {
    while((ch = getc(f_input)) != EOF)
      putc(ch, stdin);
      scanf("%c", name);
  }
  return 0;
}