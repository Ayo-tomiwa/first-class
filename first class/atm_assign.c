#include<stdio.h>
int main() {
    int balance = 0;
    int pin = 1234;
    int tmpPin;
    int anotherTransaction = 1;

    printf ("please enter your pin: ");
    scanf("%d", &tmpPin);

    if(pin != tmpPin)
    {
        printf("Invalid Pin");
        return 0;
    }

    while (anotherTransaction == 1)
    {
        int option;

        printf("What Do You Want To Do?: \n");
        printf("1 - Check Your Account Balance\n");
        printf("2 - Deposit\n");
        printf("3 - Withdraw\n");
        scanf("%d", &option);

        if (option == 1) //check acc balance
        {
            printf("Your balance is $%d\n", balance);
        }

        else if (option == 2) //deposit
        {
            int amountDeposit;
            printf("How much do you want to deposit?: $");
            scanf("%d", &amountDeposit);
            if(amountDeposit > 0){

                balance = balance + amountDeposit;
            }
            else{
               printf("Invalid deposit amount\n"); 
            }

        }
        
        else if (option == 3) //withdraw
        {
            int amountWithdraw;
            printf("How much do you want to withdraw?: $");
            scanf("%d", &amountWithdraw);
            if (amountWithdraw <= balance && amountWithdraw % 20 == 0)
            {

            balance = balance - amountWithdraw;
            }
            else
            {
                if(amountWithdraw > balance)
                {
                    printf("You don't have enough money,   Declined.");
                }
                 else
                 {
                     printf("You must enter an amount that is  divisible by 20\n ");
                 }
            }
        }
        else{
            printf("Invalid transaction.\n");
        }

        anotherTransaction = 0;
        while(anotherTransaction != 1 && anotherTransaction !=2)
        {
            printf("Do you want to do another transaction?: \n");
            printf("1 - yes, 2- no");
            scanf("%d", &anotherTransaction);
        }
    }
    printf("\n Thank you for using my atm service... I LOVE YOU ");
    return 0;

}