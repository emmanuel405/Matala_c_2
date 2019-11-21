// BASAD

double accounts[50][2] = {0};
int sizeAccounts = 0;
int sizeOpenAccounts = 0;

open_account(double amount){
    if (sizeAccounts < 50){
        accounts[sizeAccounts][0] = amount;
        accounts[sizeAccounts][1] = 1;
        printf("This is your account number: %d" ,(sizeAccounts+901));
        sizeAccounts++; sizeOpenAccounts++;
    }
    else{
        if (sizeOpenAccounts < 50){
            for(int i=0; i<sizeAccounts; i++){
                if (accounts[i][1] == 0){
                     accounts[i][0] = amount;
                     accounts[i][1] = 1;
                     printf("This is your account number: %d" ,(sieAccount+901));
                     sizeOpenAccounts++;
                }
            }
        }
    }
    else{
        printf("Sorry, the bank is full, go away !!");
    }
}

rest(int account_num){
    printf("Your rest: %lf", accounts[account_num-901][0]);
}

depositing_money(int account_num, double amount){
    accounts[account_num-901][0] += amount;
    printf("Your rest after the deposition: %lf", accounts[account_num-901][0]);
}

withrawal_money(int account_num, double amount){
    if (accounts[account_num-901][0] >= amount){
        accounts[account_num-901][0] -= amount;
        printf("Rest: %lf", accounts[account_num-901][0]);
    }
    else{
        printf("Sorry' you don't have enough money in your account");
    }
}

close_account(int ccount_num){

}

add_interest(double interest){
    for(int i=0; i<sizeAccounts; i++){
        if(accounts[i][1] == 1){
            accounts[i][0] += (interest*accounts[i][0])/100;
        }
        else{
            continue;
        }
    }
}

print_open_account(){
    
}

close_all(){
    for(int i=0; i<sizeAccounts; i++){
        accounts[i][0] = 0;
        accounts[i][1] = 0;
    }
}



