#include <stdio.h>
#include <ctype.h>
#include <string.h>


char bracket_correctness(char *string){
    int size = strlen(string);
    int present;
    
    for(int i = 0 ; i < size ; i++){
        if(string[i] == '('){
            present = 0;
            for(int j = i+1 ; j < size ; j++){
                if(string[j] == ')'){
                    present = 1;
                }
            }
        }else if(string[i] == '{'){
            present = 0 ;
            for(int j = i+1 ; j < size ; j++){
                if(string[j] == '}'){
                    present = 1;
                }
            }
        }else if(string[i] == '['){
            present  = 0 ;
            for(int j = i +1 ; j < size ; j++){
                if(string[j] == ']'){
                    present = 1;
                }
            }
        }
    }

    if(present == 1){
        printf("True");
    }else{
        printf("False");
    }
}

int main(){
    char string[100];
    
    printf("Enter the string : ");
    scanf("%s",string);
    
    bracket_correctness(string);
}
