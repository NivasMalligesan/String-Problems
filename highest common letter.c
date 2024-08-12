#include <stdio.h>
#include <ctype.h>
#include <string.h>

char string_com(char *string){
    char upper[26] = {0};
    char lower[26] = {0};
    int len = strlen(string);
    char result;
    
    for(int i = 0 ; i < len ; i++){
        if(islower(string[i])){
            lower[string[i]-'a'] = 1 ;
        }
        if(isupper(string[i])){
            upper[string[i] - 'A'] = 1;
        }
    }

    for(int i = 25 ;i >=0 ; i--){
       
        if(upper[i] && lower[i]){
            result = i + 'A' ;
            break;
        }
    }

    printf("%c",result);
}

int main(){
    char string[100];
    
    printf("Enter the string : ");
    scanf("%s",string);
    
    string_com(string);
}
