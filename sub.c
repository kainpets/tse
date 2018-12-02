// the header that allows to print stuff out
#include <stdio.h>
// program that substracts given numbers: a,b,c,
// these 3 lines below are called 'declarations'
int a = 150;
int b = 50;
int c = 25;

int sub3(int a, int b, int c)
{
  int result = a - b - c;
  return result;
}

int main()
{
  printf("%i %i %i\n", a,b,c);
  printf("sub3 = %i\n", sub3(a,b,c));
}
