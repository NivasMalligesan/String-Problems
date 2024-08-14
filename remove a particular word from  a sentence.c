// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    
    int n = 0 ;
    char sentence[1000];
    char word[100];

    printf("Enter the snetence : ");
    scanf("%[^\n]s",sentence);
    
    printf("Enter the word : ");
    scanf("%s",word);
    
    for(int i = 0 ; i < strlen(sentence) - strlen(word);i++){
        int j;
        for(j = 0 ; j < strlen(word);j++){
            if(sentence[i+j] != word[j]){
                break;
            }}
            if(j == strlen(word)){
                for(int k = i ; k < strlen(sentence)-strlen(word) ; k++){
                    sentence[k] = sentence[k+strlen(word)+1];
                }
            }
        

    }
    printf("%s",sentence);
    
    
    
    
    
    
}
