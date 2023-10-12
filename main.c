#include <stdio.h>
#include <stdlib.h>

int square(int n)
{
     n = n*n;
}

/*int square(int n)
{
     return (n*n);
}*/

int main()
{
    int n = 2;
    n=square(n);
  
    printf("square result : %i\n", n);
          
  system("PAUSE");	
  return 0;
} 
