#include <stdio.h>
int choice, pin, k;
unsigned long amount=5000, deposit, withdraw;
void main()
{
    while (pin != 0000) //stating pin and amount 
    {
//Pin is 0000 for this program
        printf("ENTER YOUR PIN");
        scanf("%d", &pin);
        if (pin != 0000)
        printf("PLEASE ENTER VALID PIN\n");
    }     //checking for pin 
    do
    {
        
        printf("\n1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Quit\n");
                printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:  //checking balence
    printf("\n YOUR BALANCE IN Rs : %lu ",    amount);
            break;
        case 2:  //widrawing amount
            printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
            scanf("%lu", &withdraw);
            if (withdraw >(amount))
            {
                printf("\n INSUFFICENT BALANCE");
            }
            else
            {
                amount = amount - withdraw;
                printf("\n\n PLEASE COLLECT CASH");
                printf("\n YOUR CURRENT BALANCE IS%lu", amount);
            }
            break;
        case 3:
            printf("\n ENTER THE AMOUNT TO DEPOSIT");
            scanf("%lu", &deposit);
                       amount = amount + deposit;
            printf("YOUR BALANCE IS %lu", amount);
            break;
        case 4:
            printf("\n THANK U FOR USING ATM");
            break;
        default:
            printf("\n INVALID CHOICE");
        }
    }
 while (!k);
}
