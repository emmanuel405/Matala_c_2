# include <stdio.h>
# include "txt_find.h"


int getline(char s[]){
    int i, num = 0;
    for(i = 0; s[i] != '\n'; i++){
        num++;
    }
    return num;
}

int getwords(char w[]){
    int i = 0, num = 0;
    while(s[i] != '\n' || s[i] != '\t' || s[i] != ' '){
        num++;
        i++;
    }
    return num;
}

int substring(char *str1, char *str2){
    int tmp = 0, i = 0;
    for (i; str2[i] != '\0' ; i++){
        for(int j = tmp; str1[tmp] != '\0';j++, tmp++){
            if(str2[i] == str1[j]){ tmp++; break; }
        }
    }
    if(str1[tmp] != '\0') return 1;
    else if(str1[tmp-1] == str2[1]) return 1;
    return 0;
}

int similar(char *s, char *t, int n){

}

void print_lines(char *str){

}

void print_similar_words(char *str){

}