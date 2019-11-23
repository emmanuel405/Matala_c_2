// BASAD
#include <stdio.h>
#define sumAccounts 50
#define diffArrFromAccounts 901


// Per account has two cells, the first for the rest and the second for account status: 0- close, 1- open.
double accounts[sumAccounts][2] = {0}; 
int sizeAccounts = 0;
int sizeOpenAccounts = 0;

open_account(double amount){
    if (sizeAccounts < sumAccounts){
        accounts[sizeAccounts][0] = amount;
        accounts[sizeAccounts][1] = 1;
        printf("This is your account number: %d\n" ,(sizeAccounts+diffArrFromAccounts));
        sizeAccounts++; sizeOpenAccounts++;
    }
    else{
        if (sizeOpenAccounts < sumAccounts){
            for(int i=0; i<sizeAccounts; i++){
                if (accounts[i][1] == 0){
                     accounts[i][0] = amount;
                     accounts[i][1] = 1;
                     printf("This is your account number: %d\n" ,(sieAccount+diffArrFromAccounts));
                     sizeOpenAccounts++;
                }
            }
        }
    }
    else{
        printf("Sorry, the bank is full, go away !!\n");
    }
}

rest(int account_num){
     if(checkNumAccount(account_num)){
        return;
    }
    printf("Your rest: %lf\n", accounts[account_num-diffArrFromAccounts][0]);
}

depositing_money(int account_num, double amount){
    if(checkNumAccount(account_num) || checkAmount(amount)){
        return;
    }
    accounts[account_num-diffArrFromAccounts][0] += amount;
    printf("Your rest after the deposition: %lf\n", accounts[account_num-diffArrFromAccounts][0]);
}

withrawal_money(int account_num, double amount){
    if(checkNumAccount(account_num) || checkAmount(amount)){
        return;
    }
    if (accounts[account_num-diffArrFromAccounts][0] >= amount){
        accounts[account_num-diffArrFromAccounts][0] -= amount;
        printf("Rest: %lf\n", accounts[account_num-diffArrFromAccounts][0]);
    }
    else{
        printf("Sorry' you don't have enough money in your account\n");
    }
}

close_account(int account_num){
   
    if(checkNumAccount(account_num)){
        return;
    }
    if (accounts[account_num- diffArrFromAccounts][1]==1)
    {
        accounts[account_num- diffArrFromAccounts][1]==0;
        accounts[account_num- diffArrFromAccounts][0]==0;
        sizeOpenAccounts--;
        printf("Account number %d closed\n", account_num);
    }
    else
    {
        printf("Cant close account number %d because the account was closed\n", account_num);
    }
    
    

}

add_interest(double interest){
    for(int i=0; i<sizeAccounts; i++){
        if(accounts[i][1] == 1){
            accounts[i][0] += (interest*accounts[i][0])/100;
        }
    }
}

print_open_account(){
    for(int i=0; i<sizeAccounts; i++){
        if(accounts[i][1]==1){
            printf("Account number: %d  Rest: %lf\n", i+diffArrFromAccounts, accounts[i][0]);
        }
    }
}

close_all(){
    for(int i=0; i<sizeAccounts; i++){
        accounts[i][0] = 0;
        accounts[i][1] = 0;
    }
}

int checkNumAccount(int account_num){
       if (account_num > 950 || account_num < 901)
    {
        printf("Account number %d not exist\n", account_num);
        return 1;
    }
    return 0;
}

int checkAmount(int amount){
    if(amount < 0){
         printf("The amount negative\n");
         return 1;
    }
    return 0;

}



