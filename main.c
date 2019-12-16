# include <stdio.h>
# include "txt_find.h"

int main(){
    char *s1 = "aba";
    char *s2 = "aba";
    char *s3 = "ahgbougal";
    char *s4 = "aakjhgf";

    int ans = substring(s1,s2);
    printf("should be 1 => %d", ans);

    return 0;
}