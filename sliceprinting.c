#include <stdio.h>
#include <string.h>

int main(){
    char string[]="AABBCA";
    int start = 1;
    int end = 4;
    printf("%.*s",end-start+1,&string[start]);
}
