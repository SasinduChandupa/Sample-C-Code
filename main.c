#include <stdio.h>
#include <stdlib.h>

void continuelogin()
{
    printf("Continuing login...\n");
}

void choosingAcc()
{
    int choose;

    printf("\nIf you want to create Bank account press 1 ");
    printf("\nIf you want to Logging Bank account press 2 ");
    printf("\nYour Choose : ");
    scanf ("%d",&choose);

    if (choose==1)
    {
        openacc();
    }
    else if (choose==2)
    {
        loging();
    }
    else
    {
        printf ("\nInvalid choose...!!!");
    }
}

void loging()
{
    char FName[50], LName[50];
    int Password, ReEnterPassword,Baccno,choose,amount;
    system ("CLS");
    printf ("Enter Your First Name :");
    scanf ("%s", &FName);

    printf ("\nEnter Your Last Name :");
    scanf ("%s", &LName);

    printf("\nEnter Your Password :");
    scanf("%d", &Password);

    for (int i = 0; i < 3; ++i)
    {
        printf("\nRe Enter Your Password :");
        scanf("%d", &ReEnterPassword);
        if (Password==ReEnterPassword)
            {
                printf("\n\n\nHello %s %s Your account balance is Rs:100000.00",FName,LName);
                printf("\nYou want to transfer money");
                printf("\n1-Yes");
                printf("\nYour Choose : ");
                scanf ("%d",&choose);
                if (choose==1)
                {
                    system("CLS");
                    printf("Hello %s %s \n",FName,LName);
                    printf("\nEnter your beneficiary account number :");
                    scanf ("%d",&Baccno);
                    printf ("\nEnter amount you want to transfer :");
                    scanf ("%d",&amount);
                    printf ("\nPress 1 to continue \nPress 2 to go Home page");
                    printf("\nYour Choose : ");
                    int balance=100000-amount;
                    scanf ("%d",&choose);
                    system("CLS");
                    if (choose==1)
                    {
                        printf ("%s %s Transfer success...\n",FName,LName);
                        printf ("Your available balance is %d ", balance);
                        sleep(10);
                        system("CLS");
                        choosingAcc();
                    }
                    else
                    {
                        loging();
                    }
                }
            }
            else
            {
                continuelogin();
            }
    }

}



void BankAccOpen(char FName[], char LName[], int Password);

void openacc()
{
    char FName[50], LName[50];
    int Password, ReEnterPassword;
    system ("CLS");
    printf ("Enter Your First Name :");
    scanf ("%s", &FName);

    printf ("\nEnter Your Last Name :");
    scanf ("%s", &LName);

    printf("\nEnter Your Password :");
    scanf("%d", &Password);

    for (int i = 0; i < 3; ++i)
    {
        printf("\nRe Enter Your Password :");
        scanf("%d", &ReEnterPassword);
        if (Password==ReEnterPassword)
            {
            BankAccOpen(FName, LName, Password);
            }
        else
        {
            continuelogin();
        }

    }
}
void BankAccOpen(char FName[], char LName[], int Password)
{
    int choise;
    system ("CLS");
    printf ("     Your Bank Account opened");
    printf ("\n.................................");
    printf ("\n       Hello %s", FName);
    printf ("\n          ^   ^");
    printf ("\n            U");
    printf ("\n.................................");
    printf ("\nYour first Name is : %s", FName);
    printf ("\nYour Last Name is : %s", LName);
    printf ("\n.................................");
    printf ("\nYour Password is : %d", Password);
    printf ("\n.................................\n\n");
    printf ("If you want to create saving account press 1 \n");
    printf ("If you want to create current account press 2 \n\n");

    printf ("Your Choise :");
    scanf  ("%d", &choise);
    if (choise==1)
        {
            saving(FName);
        }
    else
        {
            currentone
            (FName);
        }
}

void saving(char FName[])
{
    int choise;

    system("CLS");

    printf("Hello %s\n", FName);
    printf("SAVING ACCOUNT OPENING\n\n");
    printf("If you want to continue press 1\n");
    printf("If you want to Back press 2\n");
    printf("Your Choise: ");
    scanf("%d", &choise);
    if (choise == 1) {
        savingone(FName);
    } else {
        BankAccOpen(FName, "", 0);
    }
}

void savingone(char FName[])
{
    char LName[50], Address[100], city[10], fullname[250];
    int ID, five, Pno, DOB;
    system("CLS");
    printf("       Hello %s\n", FName);
    printf ("SAVING ACCOUNT OPENING");
    printf ("\n........................");
    printf("\nEnter Your full name :");
    scanf (" %s", &fullname);
    printf("Enter Your ID number :");
    scanf (" %d", &ID);
    printf("Enter your Address :");
    scanf ("%s", &Address);
    printf("Enter your Phone number :");
    scanf (" %d", &Pno);
    printf("Enter your Date of Birth :");
    scanf (" %d", &DOB);
    printf("Nearest main city for you :");
    scanf ("%s", &city);
    printf("\nPress 5 to open..");
    scanf (" %d", &five);
    system("CLS");
    printf ("Thank you %s %s",FName, LName);
    printf (" Join with our Bank");
    printf (" Your SAVING ACCOUNT opened");
    printf ("\n........................................................................");
    printf ("\n                             ^   ^");
    printf ("\n                               U");
    sleep (5);
    system ("CLS");
}


void current(char FName[])
{
    int choise;

    system ("CLS");
    printf ("       Hello %s ", FName);
    printf ("CURRENT ACCOUNT OPENING\n\n");
    printf ("\nIf you want to continue press 1 \nIf you want to Back press 2 \n");
    printf ("Your Choise :");
    scanf  ("%d", &choise);
    if (choise == 1)
      {
          currentone();
      }
    else
      {
          BankAccOpen(FName, "", 0);
      }
}

void currentone(char FName[])
{
    char LName[50], Address[100], city[10], fullname[250];
    int ID, five, Pno, DOB;

    system("CLS");
    printf("       Hello %s\n", FName);
    printf ("CURRENT ACCOUNT OPENING");
    printf ("\n........................");
    printf("\nEnter Your full name :");
    scanf (" %s", &fullname);
    printf("Enter Your ID number :");
    scanf (" %d", &ID);
    printf("Enter your Address :");
    scanf ("%s", &Address);
    printf("Enter your Phone number :");
    scanf (" %d", &Pno);
    printf("Enter your Date of Birth :");
    scanf (" %d", &DOB);
    printf("Nearest main city for you :");
    scanf ("%s", &city);
    printf("\nPress 5 to open..");
    scanf (" %d", &five);
    system("CLS");
    printf ("Thank you %s %s",FName, LName);
    printf (" Join with our Bank");
    printf (" Your CURRENT ACCOUNT opened");
    printf ("\n........................................................................");
    printf ("\n                                ^   ^");
    printf ("\n                                  U");
}

int main()
{
    choosingAcc();
    return 0;
}

