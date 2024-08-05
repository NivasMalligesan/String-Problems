#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* lower(char *name,int len){
    for (int i = 0 ; i < len ; i++){
        name[i] = tolower(name[i]);
    }
    return  name;
}

int main (){
    char name1[100];
    char name2[100];
    int len1, len2 ;
    
    printf("Enter The FIrst Name : ");
    scanf("%s",name1);
    len1 = strlen(name1);
    char *namelow1 =lower(name1,len1);
    
    printf("Enter The Second Name :");
    scanf("%s",name2);
    len2 = strlen(name2);
    char *namelow2 =lower(name2,len2);
    char temp[100];
  
    strcpy(temp,name2)
  
    int found;
    
    if(len1 == len2){
        for (int i = 0 ; i < len1 ; i++){
            for (int j = 0 ; j < len2 ;j++ ){
                if(namelow1[i] == namelow2[j]){
                    namelow2[j]= '*';
                    found++;
                    break;
                }
            }
        } if(found == len1){
            printf("%s and %s are anagram ",namelow1,temp);
        }  else{
            printf("%s and %s are not anagram",namelow1,temp);
        }
    }
    else{
        printf("%s and %s are not anagram ",namelow1,temp);
    }
}
