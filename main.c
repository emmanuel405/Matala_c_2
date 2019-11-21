#include <stdio.h>
#include "myBank.h"

int main(){

char clientChoice;
int numOfAccount;
double numOfAmount;

printf("Transaction type?")
scanf("%c", &clientChoice);

switch (clientChoice)
{
case 'O':
    printf("Initial deposit?");
    scanf("%lf" &numOfAmount);
    open_account(numOfAmount);
    break;

    // rest
    case 'B':
    printf("Account number?");
    scanf("%d", &numOfAccount);
    rest(numOfAccount);
    break;

    // depositing_money
    case 'D':
    printf("Account number?");
    scanf("%d", &numOfAccount);
    printf("Amount?");
    scanf("%lf", &numOfAmount);
    depositing_money(numOfAccount, numOfAmount);
    break;

    // withrawal_money
    case 'W':
    printf("Account number?");
    scanf("%d", &numOfAccount);
    printf("Amount?");
    scanf("%lf", &numOfAmount);
    withrawal_money(numOfAccount, numOfAmount);
    break;

    // close_account
    case 'C':
    printf("Account number?");
    scanf("%d", &numOfAccount);
    close_account(numOfAccount);
    break;

    // add_interest
    case 'I':
    printf("Interest rate?")
    double interest = 0;
    scanf("%lf", &interest);
    add_interest(interest);
    break;

    // print_open_account
    case 'P':
    print_open_account();
    break;

    // close_all
    case 'E':
    close_all{};
    break;

default:
    printf("Sorry' we don't understand what are you want.\n
    If you want to open an account, press 'O'\n
    If you want to check how mush you have in your account, press 'B'\n
    If you want to deposite a money in your account, press 'D'\n
    If you want to withrawal cash before your account, press 'W'\n
    If you want to close your account, press 'C'\n
    < And other action for director of the bank >
    Thank you. the Bank");

}
}