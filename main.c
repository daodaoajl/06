#include <stdio.h>
#include <stdlib.h>

int SumTwo(int a, int b)
{
     return (a+b);
}

int square(int n)
{
     return (n*n);
}

int get_max(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;     
}

int main()
{
    int a,b;
    a=2;
    b=3;
    int n;
    n=5;
  
    printf("sumTwo result : %i\n", SumTwo(a,b));
    printf("square result : %i\n", square(n));
    printf("get_max result : %i\n", get_max(a,b));
          
  system("PAUSE");	
  return 0;
} 
