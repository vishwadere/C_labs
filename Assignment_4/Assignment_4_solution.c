/*
 C program to find the biggest of three numbers
 */
#include <stdio.h>
void main()
{
    float num1, num2, num3;
 
    printf("Enter the values of num1, num2 and num3\n");
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("num1 = %f\tnum2 = %f\tnum3 = %f\n", num1, num2, num3);
    if (num1 > num2)//comparing first 2 numbers
    {
        if (num1 > num3)//comparing first and third number
        {
            printf("num1 is the greatest among three \n");
        }
        else
        {
            printf("num3 is the greatest among three \n");
        }
    }
    else if (num2 > num3)//comparing second amd third number
        printf("num2 is the greatest among three \n");
    else
        printf("num3= %f is the greatest amongst the three given inputs\n", num3);
}
