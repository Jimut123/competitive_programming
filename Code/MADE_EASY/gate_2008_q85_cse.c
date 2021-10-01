#include <stdio.h>
int f(int x, int *py, int **ppz)
{
  int y, z;
  **ppz += 1; 
   z  = **ppz; // creates a temporary space, with no relation to the calling function
  *py += 2;
   y = *py; // creates a temporary space, with no relation to the calling function
   x += 3;
   return x + y + z;
}
   
void main()
{
   int c, *b, **a;
   c = 4;
   b = &c;
   a = &b; 
   printf( "%d", f(c,b,a));
   getchar();
}

// prints 19
