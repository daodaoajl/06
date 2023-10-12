#include <stdio.h>
#include <stdlib.h>

int combination (int n, int r)
{
    
    int div1, div2;//(div1 : 분자, div2 : 분모)
    
    div1 = factorial(n);
    div2 = factorial(n-r)*factorial(r);
    
    return(div1/div2);//분수 
}

int factorial(int n)
{
    int res = 1;
    int i;
    
    for(i = 1; i<= n; i++ )   
          res = res*i  ;   
    return res;
}

int main(void)
{
    int n;
    int r;
    int result;
    
    printf("input n : \n");
    scanf("%i",&n);
    printf("input r : \n");
    scanf("%i",&r);
  
    result = combination(n,r);
    printf("result is %i\n", result);
          
  system("PAUSE");	
  return 0;
} 
