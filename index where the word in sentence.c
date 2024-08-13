#include <stdio.h>
#include <string.h>

int main(){
    char sentence[100000];
    char word[100];
    
    printf("Enter the sentence : ");
    scanf("%[^\n]s",sentence);
    
    printf("Enter the word to find : ");
    scanf("%s",word);
    
    for(int i = 0 ; i < strlen(sentence)-strlen(word) ;i++){
        int j ; 
        for(j = 0 ; j < strlen(word) ; j++){
            if(sentence[i+j] != word[j]){
                break;
            }
        }
        
        if(j == strlen(word)){
            printf("%d",i);
        }
    }
    
}
