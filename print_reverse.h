#include <stdio.h>
#include <string.h>

void print_reverse(char *str)
{
  size_t len = strlen(str);

  // str holds the memory location of the first character in the array
  // adding any number to str will find the location of the character
  // at the position added. Eg. str + 1 will find the character in the
  // second position in memory after the first item
  char *t = str + len - 1;

  while (t >= str)
  {
    printf("%c\n", *t);

    t = t - 1;
  }

  puts("");
}
