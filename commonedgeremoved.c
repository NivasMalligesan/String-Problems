#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool verify(char  *string , int len){
    for(int i = 0 ; i < len ; i++){
        if(string[i] != 'a' && string[i] != 'b' && string[i] != 'c'){
            return false;
        }
        return true;
    }
}

int main(){
    char string[100];

    
    printf("Enter the array : ");
    scanf("%s",string);
    int len = strlen(string);
    
    int left = 0 ;
    int right = len-1;
    
    if(verify(string,len)){    
    while (right > left){
        if(string[left] == string[right]){
            while(left < right && string[left] == string[left+1]){
                left++;
            }
            while (right > left && string[right] == string[right - 1]){
                right--;
            }
            left++;
            right--;
        }
        else{
        break;
    }
    }
    printf("%d",right-left+1);
    }else {
        printf("Invalid input");
    }
}
