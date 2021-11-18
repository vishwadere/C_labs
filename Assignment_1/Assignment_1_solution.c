/*Fpl Assignment 1*/
#include <stdio.h>
int main() {
    int feet,inches,cm;
    double ft,m;
		printf("Enter the value of feet: ");
		scanf("%d",&feet);
		//converting into inches
		inches=feet*12;
			printf("Total inches will be: %d\n",inches);
				printf("enter the value of centimeter: ");
		scanf("%d",&cm);
		//converting cm to meter
		m= 0.01*cm;
		//converting cm to feet
		ft=0.0328 * cm;
			printf("Total cm into m will be: %.2f\n",m);
				printf("Total cm into feet will be: %.2f\n",ft);
		return 0;
} 
