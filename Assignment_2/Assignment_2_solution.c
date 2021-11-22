#include<stdio.h> 
int main() 
{  
 int n; 
printf("enter 1 to convert fahrenheit to celsius \nenter 2 to convert celsius to fahrenheit:"); scanf("%d",& n); 
if(n==1) 
{ 
float fahrenheit, Celsius; 
// Reads temperature in fahrenheit 
printf("\nEnter temperature in Fahrenheit:"); 
scanf("%f",&fahrenheit); 
// Fahrenheit to celsius conversion formula 
Celsius = ((fahrenheit-32)*5)/9; 
//prints the temperature in celsius
printf("Temperature in Celsius is: %f",Celsius); 
} 
else 
{ 
float F,C; 
printf("\nEnter temperature in Celsius: "); 
scanf("%f", &C); 
//celsius to fahrenheit conversion formula. 
F=(C*9/5)+32; 
printf("temperature in fahrenheit is = %.2f ", F); 
} 
return (0); 
} 
