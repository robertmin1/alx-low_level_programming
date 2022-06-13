#include "main.h"

void _puts(char *str)
{
  int i;

  for(i = 0; str[i]; i++);
  {
    printf(str[i]);
  }
  printf('\n');
}
