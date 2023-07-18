#include <stdio.h>
#include <stdlib.h>
//This ATM is for five user with pins
//User1: 1478
//User2: 1920
//User3: 7634
//User4: 8934
//User5: 0245
int main()
{
    int pin;
    int option;
    int pin1=1478;
    int pin2=1920;
    int pin3=7634;
    int pin4=8934;
    int pin5=0245;
    int deposit;
    int pinChange1;
    int pinChange2;
    int pinChange3;
    int pinChange4;
    int pinChange5;
    //Details for account 1
    int withdrwal1;
    float Balance1= 70000.00;
    float Available_Balance1 = 69980.00;
    //Details for account 2
    int withdrwal2;
    float Balance2= 2000.00;
    float Available_Balance2 = 1980.00;
    //Details for account 3
    int withdrwal3;
    float Balance3= 500;
    float Available_Balance3 = 497.89;
    //Details for account 4
    int withdrwal4;
    float Balance4= 753650000.00;
    float Available_Balance4 = 6998375350.90;
    //Details for account 5
    int withdrwal5;
    float Balance5= 75600;
    float Available_Balance5 = 75580;
    start:
    printf("Welcome To Smartt Banks ATM Services\n");
    printf("Slot Your Card Into the Slot area on Your Right Hand Side\n");

    printf("Enter Your PIn; ");
    scanf("%d",&pin);



         if(pin=pin1)// entering into the first account in the system with the pin of the user
            {
            // Asking the user if he wants to withdraw money or to just check his or her account details
            printf("1. Withdrawal: \n");
            printf("2. Deposit: \n");
            printf("3. Account Details: \n");
            printf("4. Change Pin: \n");
            scanf("%d", &option);
            //where the user goes to next after selecting one of the above options
            if(option==1)
            {
                printf("You Have Ghs %0.2f in your account.\n", Balance1);
                printf("Available Balance is Ghs %0.2f.\n", Available_Balance1);
                printf("Enter withdrawal Amount.\n");
                scanf("%d",&withdrwal1);

                printf("You have successfully withdrawn Ghs %d. \n", withdrwal1);
                printf("Total Balance: %0.2f \n Available Balance: Ghs %0.2f.\n", Balance1-=withdrwal1, Available_Balance1-=withdrwal1);
                printf("THANK YOU FOR CHOOSING SMARTT BANKS\n\n");
                goto start;

            }
            else if(option==2)
            {
                printf("Enter Deposit Amount: ");
                scanf("%d",&deposit);

                printf("\nDeposit SCESSFUL");
                printf("\nBalance: %0.2f", Balance1+=deposit);
                printf("\nAvailable Balance: %0.2f\n\n", Available_Balance1+=deposit);
                goto start;
            }
            else if(option==3)
            {
                 printf("Your Total Account Balance: Ghs %0.2f.\n", Balance1);
                 printf("Available Balance: Ghs %0.2f \n\n", Available_Balance1);
                 goto start;

            }
            else if(option==4)
            {
                printf("Input New pin: ");
                scanf("%d",&pinChange1);
                pin1=pinChange1;
                printf("SUCCESFUL!!! \n\n");

                goto start;
            }

        }
         else if(pin=pin2)// entering into the second account in the system with the pin of the user
            {
            // Asking the user if he wants to withdraw money or to just check his or her account details
            printf("1. Withdrawal: \n");
            printf("2. Deposit: \n");
            printf("3. Account Details: \n");
            printf("4. Change Pin: \n");
            scanf("%d", &option);
            //where the user goes to next after selecting one of the above options
            if(option==1)
            {
                printf("You Have Ghs %0.2f in your account.\n", Balance2);
                printf("Available Balance is Ghs %0.2f.\n", Available_Balance2);
                printf("Enter withdrawal Amount.\n");
                scanf("%d",&withdrwal2);

                printf("You have successfully withdrawn Ghs %d. \n", withdrwal2);
                printf("Total Balance: %0.2f \n Available Balance: Ghs %0.2f.\n", Balance2-=withdrwal2, Available_Balance2-=withdrwal2);
                printf("THANK YOU FOR CHOOSING SMARTT BANKS\n\n");
                goto start;

            }
            else if(option==2)
            {
                printf("Enter Deposit Amount: ");
                scanf("%d",&deposit);

                printf("\nDeposit SCESSFUL");
                printf("\nBalance: %0.2f", Balance2+=deposit);
                printf("\nAvailable Balance: %0.2f\n\n", Available_Balance2+=deposit);
                goto start;
            }
            else if(option==3)
            {
                 printf("Your Total Account Balance: Ghs %0.2f.\n", Balance2);
                 printf("Available Balance: Ghs %0.2f \n\n", Available_Balance2);
                 goto start;

            }
            else if(option==4)
            {
                printf("Input New pin: ");
                scanf("%d",&pinChange2);
                pin2=pinChange2;
                printf("SUCCESFUL!!! \n\n");

                goto start;
            }

        }

        else if(pin=pin3)// entering into the third account in the system with the pin of the user
            {
            // Asking the user if he wants to withdraw money or to just check his or her account details
            printf("1. Withdrawal: \n");
            printf("2. Deposit: \n");
            printf("3. Account Details: \n");
            printf("4. Change Pin: \n");
            scanf("%d", &option);
            //where the user goes to next after selecting one of the above options
            if(option==1)
            {
                printf("You Have Ghs %0.2f in your account.\n", Balance3);
                printf("Available Balance is Ghs %0.2f.\n", Available_Balance3);
                printf("Enter withdrawal Amount.\n");
                scanf("%d",&withdrwal3);

                printf("You have successfully withdrawn Ghs %d. \n", withdrwal3);
                printf("Total Balance: %0.2f \n Available Balance: Ghs %0.2f.\n", Balance3-=withdrwal3, Available_Balance3-=withdrwal3);
                printf("THANK YOU FOR CHOOSING SMARTT BANKS\n\n");
                goto start;

            }
            else if(option==2)
            {
                printf("Enter Deposit Amount: ");
                scanf("%d",&deposit);

                printf("\nDeposit SCESSFUL");
                printf("\nBalance: %0.2f", Balance3+=deposit);
                printf("\nAvailable Balance: %0.2f\n\n", Available_Balance3+=deposit);
                goto start;
            }
            else if(option==3)
            {
                 printf("Your Total Account Balance: Ghs %0.2f.\n", Balance3);
                 printf("Available Balance: Ghs %0.2f \n\n", Available_Balance3);
                 goto start;

            }
            else if(option==4)
            {
                printf("Input New pin: ");
                scanf("%d",&pinChange3);
                pin3=pinChange3;
                printf("SUCCESFUL!!! \n\n");

                goto start;
            }
        }
            if(pin=pin4)// entering into the fourth account in the system with the pin of the user
            {
            // Asking the user if he wants to withdraw money or to just check his or her account details
            printf("1. Withdrawal: \n");
            printf("2. Deposit: \n");
            printf("3. Account Details: \n");
            printf("4. Change Pin: \n");
            scanf("%d", &option);
            //where the user goes to next after selecting one of the above options
            if(option==1)
            {
                printf("You Have Ghs %0.2f in your account.\n", Balance4);
                printf("Available Balance is Ghs %0.2f.\n", Available_Balance4);
                printf("Enter withdrawal Amount.\n");
                scanf("%d",&withdrwal4);

                printf("You have successfully withdrawn Ghs %d. \n", withdrwal4);
                printf("Total Balance: %0.2f \n Available Balance: Ghs %0.2f.\n", Balance4-=withdrwal4, Available_Balance4-=withdrwal4);
                printf("THANK YOU FOR CHOOSING SMARTT BANKS\n\n");
                goto start;

            }
            else if(option==2)
            {
                printf("Enter Deposit Amount: ");
                scanf("%d",&deposit);

                printf("\nDeposit SCESSFUL");
                printf("\nBalance: %0.2f", Balance4+=deposit);
                printf("\nAvailable Balance: %0.2f\n\n", Available_Balance4+=deposit);
                goto start;
            }
            else if(option==3)
            {
                 printf("Your Total Account Balance: Ghs %0.2f.\n", Balance4);
                 printf("Available Balance: Ghs %0.2f \n\n", Available_Balance4);
                 goto start;

            }
            else if(option==4)
            {
                printf("Input New pin: ");
                scanf("%d",&pinChange4);
                pin4=pinChange4;
                printf("SUCCESFUL!!! \n\n");

                goto start;
            }
        }
            else if(pin=pin5)// entering into the fifth account in the system with the pin of the user
            {
            // Asking the user if he wants to withdraw money or to just check his or her account details
            printf("1. Withdrawal: \n");
            printf("2. Deposit: \n");
            printf("3. Account Details: \n");
            printf("4. Change Pin: \n");
            scanf("%d", &option);
            //where the user goes to next after selecting one of the above options
            if(option==1)
            {
                printf("You Have Ghs %0.2f in your account.\n", Balance5);
                printf("Available Balance is Ghs %0.2f.\n", Available_Balance5);
                printf("Enter withdrawal Amount.\n");
                scanf("%d",&withdrwal5);

                printf("You have successfully withdrawn Ghs %d. \n", withdrwal5);
                printf("Total Balance: %0.2f \n Available Balance: Ghs %0.2f.\n", Balance5-=withdrwal5, Available_Balance5-=withdrwal5);
                printf("THANK YOU FOR CHOOSING SMARTT BANKS\n\n");
                goto start;

            }
            else if(option==2)
            {
                printf("Enter Deposit Amount: ");
                scanf("%d",&deposit);

                printf("\nDeposit SCESSFUL");
                printf("\nBalance: %0.2f", Balance5+=deposit);
                printf("\nAvailable Balance: %0.2f\n\n", Available_Balance5+=deposit);
                goto start;
            }
            else if(option==3)
            {
                 printf("Your Total Account Balance: Ghs %0.2f.\n", Balance5);
                 printf("Available Balance: Ghs %0.2f \n\n", Available_Balance5);
                 goto start;

            }
            else if(option==4)
            {
                printf("Input New pin: ");
                scanf("%d",&pinChange5);
                pin5=pinChange5;
                printf("SUCCESFUL!!! \n\n");

                goto start;
            }
        }


    return 0;
}
