#include <stdio.h>

// copy io

int main()
{
  int c;
  int last_c = '\0';

  while ((c = getchar()) != EOF)
  {
    if (c != ' ' || last_c != ' ')
    {
      putchar(c);
    }

    last_c = c;
  }

  return 0;
}