#include <stdio.h>
#include <math.h>
#include "myBank.h"

int main(){

char clientChoice ;
int numOfAccount;
double numOfAmount;

while (clientChoice != 'E'){
printf("Hello welcome to the bank.\nTo open an account, press 'O'\nTo check how much you have in your account, press 'B'\nTo deposite a money in your account, press 'D'\nTo withrawal cash before your account, press 'W'\nTo close your account, press 'C'\nOther action for director of the bank. Thank you\n");

printf("Transaction type?\n");
if(scanf("%c",&clientChoice) != 1){
    printf ("Sorry, we don't understand what are you want. press again");
}
else{
switch (clientChoice)
{
    
    case 'O':
    printf("Initial deposit?\n");
    if(scanf("%lf", &numOfAmount) != 1){ break; }
    open_account(numOfAmount);
    break;

    // rest
    case 'B':
    printf("Account number?\n");
    if(scanf("%d", &numOfAccount) != 1){ break; }
    rest(numOfAccount);
    break;
    
    // depositing_money
    case 'D':
    printf("Account number?\n");
    if(scanf("%d", &numOfAccount) != 1){ break; }
    printf("Amount?\n");
    if(scanf("%lf", &numOfAmount) != 1){ break; }
    depositing_money(numOfAccount, numOfAmount);
    break;

    // withrawal_money
    case 'W':
    printf("Account number?\n");
    if(scanf("%d", &numOfAccount) != 1){ break; }
    printf("Amount?\n");
    if(scanf("%lf", &numOfAmount) != 1){ break; }
    withrawal_money(numOfAccount, numOfAmount);
    break;

    // close_account
    case 'C':
    printf("Account number?\n");
    if(scanf("%d", &numOfAccount) != 1){ break; }
    close_account(numOfAccount);
    break;

    // add_interest
    case 'I':
    printf("Interest rate?\n");
    double interest;
    if(scanf("%lf", &interest) != 1){ break; }
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
    printf("Sorry, we dont understand what are you want.\n");
    }
}
}
return 0;
}