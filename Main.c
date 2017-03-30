#include <stdio.h>
#include<conio.h>

void main()
{
 int n,i,divisible;
 scanf("%d",&n);
 
 divisible=0;
 for(i=2;i<n/2;i++)  if(n%i==0)
  {
   divisible=1;
   break;
  }
  
 if(divisible)
 printf("\n%d is not a prime number",n);
 
 else
 printf("\n%d is a prime number",n);
 
}
