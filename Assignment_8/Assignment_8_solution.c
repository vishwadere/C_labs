//program to find GCD and LCM 
#include <stdio.h>  
int main()  
{  
    int num1, num2, i, gcd, LCM;  
    printf (" Enter any two numbers: \n ");  
    scanf (" %d %d", &num1, &num2);  
    
    for ( i = 1; i <= num1 && i <= num2; ++i)  
    {  
        // checking divisibility
        if  (num1 % i ==0 && num2 % i == 0)  
        gcd = i;
    }  
     printf("GCD=%d", gcd);
    LCM = (num1 * num2) / gcd;  
    printf( "\n LCM=%d. ", num1, num2, LCM );  
}  
