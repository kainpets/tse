#include <stdio.h>
// division of two numbers called 'dzielna' and 'dzielnik'
int dzielna = 100;
int dzielnik = 50;


int sub(int dzielna, int dzielnik)
{
  int result = dzielna / dzielnik;
  return result;
}

int main()
{
  printf("main = %i/n", main(dzielna, dzielnik));
}
