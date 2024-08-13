#include <stdio.h>
#include <string.h>

void word_compare(char *word){
    int len = strlen(word);
    int array[26] = {0};
    
    for(int i = 0 ; i < len ; i++){
        array[word[i]-'a']++;
    }
    
    for(int i = 0 ; i < 26 ; i++){
        if(array[word[i]-'a'] == 1){
            printf("%c",word[i]);
            return;
        }
    }
}

int main(){
    char word[100];
    printf("Enter the word : ");
    scanf("%s",word);
    word_compare(word);
}
