#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool ispalindrom(char *string,int start , int end){
 
    while(start < end){
        if(string[start]!=string[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int print_palinromic_substrings(char *string){
    int count  = 0 ;
    int len = strlen(string);
    for(int start = 0 ; start < len ; start++){
        for(int end = start ; end < len ; end++){
            if(ispalindrom(string,start,end)){
                printf("%.*s\n",end-start+1,string+start);
                count++;
            }
        }
    }
    printf("%d",count);
}

int main(){
    char string[100];
    printf("Enter the string : ");
    fgets(string, sizeof(string), stdin);
    int len = strlen(string);
    
    if(len == 1){
        printf("-2");
    }else if(len > 1){
        print_palinromic_substrings(string);
        
    }else{
        printf("Invalid");
    }
}
