#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int removecommonterms(char *name1 ,char *name2){
    char count[26] = {0};
    int len1 = strlen(name1);
    int len2 = strlen(name2);
    int remain = 0;
    
    for(int i = 0 ; i < len1 ; i++){
        count[tolower(name1[i])-'a']++;
    }
    for(int i = 0 ; i < len2 ; i++){
        count[tolower(name2[i])-'a']--;
    }
    
    for(int i = 0 ;i < 26;i++){
        remain += abs(count[i]);
    }
    return remain;
}

char flames(int count){
    char flames[] = "FLAMES";
    int lenf = strlen(flames);
    int position=0;
    
    for(int i = lenf ; i > 1 ; i--){
      position = (position + count - 1)%i;
      for (int j = position ; j < i-1 ; j++ ){
        flames[j] = flames[j+1];
      }
    }
    return flames[0];
    
}


int main(){
    char name1[100];
    char name2[100];
    
    printf("Enter Name 1 : ");
    scanf("%s",name1);
    printf("Enter Name 2 : ");
    scanf("%s",name2);
    
    int count = removecommonterms(name1,name2);
    char result = flames(count);
    
    printf("%c",result);
    
}
