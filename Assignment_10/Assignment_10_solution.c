//program for fibonacci series
#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i,elements;    
 printf("Enter the number of elements:");    
 scanf("%d",&elements);    
 printf("\n%d %d",n1,n2);//printing 0 and 1 as thr first two elements 
 for(i=2;i<elements;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }    
