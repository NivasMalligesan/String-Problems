#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    char sentence[10000];
    printf("Enter the sentence : ");
    scanf("%[^\n]s",sentence);
    bool isnumber =0 ;
    int num = 0, sum = 0 ;
    
    for(int i = 0 ; i < strlen(sentence) ; i++){
        if(isdigit(sentence[i])){
            num = (num*10) + sentence[i] - '0';
            isnumber = 1;
        }else{
            if(isnumber){
                sum += num;
                num = 0;
                isnumber = 0 ; 
                
            }
        }
    }
    
    if(isnumber){
        sum += num;
    }
    
    printf("The sum of all numbers in the sentence is: %d\n", sum);

    return 0;
}
