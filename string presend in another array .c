// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int compare(char *word1,char *word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int wordarray1[26] = {0};
    int wordarray2[26] = {0};
    
    for(int i = 0 ;i < len1 ; i++){
        wordarray1[word1[i] - 'a']++;
    }
    
    for(int i = 0 ;i < len2 ; i++){
        wordarray2[word2[i]  - 'a']++;
    }
    
    for(int i = 0 ; i < 26 ; i++){
        if(wordarray1[i] > wordarray2[i]){
            printf("false");
            return 0;
        }
    }
    printf("true");
}

int main() {
    char word1[100];
    char word2[100];
    printf("Enter The word 1 : " );
    scanf("%s",word1);
    printf("Enter the word 2 : ");
    scanf("%s",word2);
    
    compare(word1,word2);
    
    return 0;
}
