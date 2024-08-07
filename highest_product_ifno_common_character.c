#include <string.h>
#include <stdio.h>

int commoncharacter(char *word1,char *word2){
    int common1[26]={0};
    int common2[26]={0};
    for(int i = 0 ; i < strlen(word1) ; i++){
        common1[word1[i]-'a'] = 1;
    }
    for(int i = 0 ; i < strlen(word2) ; i++){
        common2[word2[i]-'a'] = 1;
    }
    
    for(int i = 0 ; i < 26 ;i++){
        if(common1[i] && common2[i]){
            return 1;
        }
    }
    return 0 ;
}

int maxproduct(char word[][11],int n){
    int maxproduct = 0 ;

    
    for (int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(!commoncharacter(word[i],word[j])){
                int product = strlen(word[i])*strlen(word[j]);
                if(product > maxproduct){
                maxproduct = product;
            }
            }
            
        }
    }
    return maxproduct;
}



int main(){
    int n ;
    printf("Enter the number of words : ");
    scanf("%d",&n);
    
    char word[n][11];
    
    for (int i = 0 ; i < n ; i++){
        printf("Enter the %d Word : ",i+1);
        scanf("%s",word[i]);
    }
    int max = maxproduct(word,n);
    printf("Max product : %d ",max);
    
}
