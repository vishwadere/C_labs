//program for SI and CI
#include<stdio.h>
int main()
{
     float p, t, r, SI, CI,a;
     printf("Enter principal ie. p : ");
     scanf("%f",&p);
     printf("Enter time ie. t : ");
     scanf("%f",&t);
     printf("Enter rate ie. r : ");
     scanf("%f",&r);
     // calculating simple interest
     SI= ( p*t*r ) / 100;
     printf("simple interest = %.2f\n",SI);
     //calculating amount
     a = p* (pow((1 + r / 100), t));
     //compund interest
     CI= a-p;
     printf("compound interest = %.2f\n",CI);

     return 0;
}
