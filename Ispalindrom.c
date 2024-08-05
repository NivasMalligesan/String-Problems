#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int Ispalindrom(char *word){
    int len = strlen(word);
    int start = 0 ;
    int end = len-1;
    
    while(start < end){
        if(word[start] != word[end]){
            return false;
        }
        start++;
        end--;
       }
    return true;
}



int main(){
    char word[100];
    printf("Enter the String : ");
    scanf("%s",word);
    
   if(Ispalindrom(word)){
       printf("%s is a palindrom",word);
   }else{
       printf("%s is not a palindrom",word);
   }
}
