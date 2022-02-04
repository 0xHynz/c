#include <stdio.h>


int main(){
    char a[10] = "test";
    int res = strcmp(a,"tes");
    int res2 = strcmp(a,"test");

    printf("res: %i, res2: %i\n",res,res2);
    return 0;
}
