#include <stdio.h>
#include<conio.h>

void main()
{
 int n,i,prime=1;
 printf("Enter any integer number:);
 scanf("%d",&n);
 
 prime=1;
 
 if(n==2)
 {
  prime=1;
 }
 else if(n>2)for(i=3;i<(n/i-1);i+=2)  
 {
  if(n%i==0)
  {
   prime=0;
   break;
  }  
 }
 
 if(prime)
 printf("\n%d is a prime number",n); 
 else
 printf("\n%d is not a prime number",n); 
}
