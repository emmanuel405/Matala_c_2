#include <stdio.h>
#include "myBank.h"

int main(){

char clientChoice;
int numOfAccount;
double numOfAmount;

    printf("Hello welcome to the bank.\nTo open an account, press 'O'\nTo check how much you have in your account, press 'B'\nTo deposite a money in your account, press 'D'\nTo withrawal cash before your account, press 'W'\nTo close your account, press 'C'\nOther action for director of the bank. Thank you\n");

printf("Transaction type?\n");
if(scanf("%c", &clientChoice) != 1){
    printf ("Sorry, we don't understand what are you want. press again");
    return 1;
}
else{
switch (clientChoice)
{
case 'O':
    printf("Initial deposit?\n");
    scanf("%lf", &numOfAmount);
    open_account(numOfAmount);
    break;

    // rest
    case 'B':
    printf("Account number?\n");
    scanf("%d", &numOfAccount);
    rest(numOfAccount);
    break;

    // depositing_money
    case 'D':
    printf("Account number?\n");
    scanf("%d", &numOfAccount);
    printf("Amount?\n");
    scanf("%lf", &numOfAmount);
    depositing_money(numOfAccount, numOfAmount);
    break;

    // withrawal_money
    case 'W':
    printf("Account number?\n");
    scanf("%d", &numOfAccount);
    printf("Amount?\n");
    scanf("%lf", &numOfAmount);
    withrawal_money(numOfAccount, numOfAmount);
    break;

    // close_account
    case 'C':
    printf("Account number?\n");
    scanf("%d", &numOfAccount);
    close_account(numOfAccount);
    break;

    // add_interest
    case 'I':
    printf("Interest rate?\n");
    double interest;
    scanf("%lf", &interest);
    add_interest(interest);
    break;

    // print_open_account
    case 'P':
    print_open_account();
    break;

    // close_all
    case 'E':
    close_all();
    break;

default:
    printf("Sorry, we dont understand what are you want.\nIf you want to open an account, press 'O'\nIf you want to check how mush you have in your account, press 'B'\nIf you want to deposite a money in your account, press 'D'\nIf you want to withrawal cash before your account, press 'W'\nIf you want to close your account, press 'C'\n< And other action for director of the bank > Thank you. the Bank");

}
}
return 0;
}