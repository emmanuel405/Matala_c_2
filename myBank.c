// BASAD
#include <stdio.h>
#include <math.h>
#include "myBank.h"
#define SumAccounts 50
#define DiffArrFromAccounts 901
#define Rest  0
#define Status 1
#define True 1
#define False 0
#define Close 0
#define Open 1


// Per account has two cells, the first for the rest and the second for account status: 0- close, 1- open.
double accounts[SumAccounts][2] = {0}; 
int sizeAccounts = 0;
int sizeOpenAccounts = 0;

int isRealNumAccount(int account_num){
       if (account_num > 950 || account_num < 901)
    {
        printf("Account number %d not exist\n", account_num);
        return False;
    }
    return True;
}

int isPosAmount(int amount){
    if(amount < 0){
         printf("The amount negative\n");
         return  False;
    }
    return True;

}
double toTwoDigits( double amount){
    return floor(100*amount)/100;
}



void open_account(double amount){
    if(isPosAmount(amount)){
       if (sizeOpenAccounts < SumAccounts){
            for(int i=0; i<sizeAccounts; i++){
                if (accounts[i][Status] == Close){
                     accounts[i][Rest] = toTwoDigits(amount);
                     accounts[i][Status] = Open;
                     printf("This is your account number: %d\n" ,(i+DiffArrFromAccounts));
                     sizeOpenAccounts++;
                     sizeAccounts++;
                }
            }
       }
        else{
             printf("Sorry, the bank is full, go away !!\n");
        }
    }
}

void rest(int account_num){
     if(isRealNumAccount(account_num)){
         printf("Your rest: %lf\n", accounts[account_num-DiffArrFromAccounts][Rest]);
     }
}

void depositing_money(int account_num, double amount){
    if(isRealNumAccount(account_num) && isPosAmount(amount)){
        accounts[account_num-DiffArrFromAccounts][Rest] =toTwoDigits(accounts[account_num-DiffArrFromAccounts][Rest]+ amount);
        printf("Your rest after the deposition: %lf\n", accounts[account_num-DiffArrFromAccounts][Rest]);
    }
}

void withrawal_money(int account_num, double amount){
    if(isRealNumAccount(account_num) && isPosAmount(amount)){
        if (accounts[account_num-DiffArrFromAccounts][Rest] >= amount){
            accounts[account_num-DiffArrFromAccounts][Rest] =toTwoDigits(accounts[account_num-DiffArrFromAccounts][Rest]- amount) ;
            printf("Rest: %lf\n", accounts[account_num-DiffArrFromAccounts][Rest]);
        }
        else{
            printf("Sorry' you don't have enough money in your account\n");
        }
    }
}

void close_account(int account_num){
   
    if(isRealNumAccount(account_num)){
        if (accounts[account_num- DiffArrFromAccounts][Status]==Open){
            accounts[account_num- DiffArrFromAccounts][Status]==Close;
            accounts[account_num- DiffArrFromAccounts][Rest]==0;
            sizeOpenAccounts--;
            printf("Account number %d closed\n", account_num);
        }
        else{
            printf("Cant close account number %d because the account was closed\n", account_num);
        }
    }
    
    

}

void add_interest(double interest){
    for(int i=0; i<sizeAccounts; i++){
        if(accounts[i][Status] == Open){
            accounts[i][Rest] =toTwoDigits(accounts[i][Rest]+ (interest*accounts[i][Rest])/100);
        }
    }
}

void print_open_account(){
    for(int i=0; i<sizeOpenAccounts; i++){
        if(accounts[i][Status] == Open){
            printf("Account number: %d  Rest: %lf\n", i+DiffArrFromAccounts, accounts[i][Rest]);
        }
    }
}

void close_all(){
    for(int i=0; i<sizeAccounts; i++){
        accounts[i][Rest] = 0;
        accounts[i][Status] = Close;
    }
}




