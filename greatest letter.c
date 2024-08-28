// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>


void maxchar(char* string){
    char max = string[0];
    for(int i = 1 ; i < strlen(string) ; i++){
        if(max < string[i]){
            max = string[i];
        }
    }
    
    printf("Greatest letter : %c",max);
    
    
}

int main() {
    char string[100]; 
    printf("Enter the siring : ");
    scanf("%s",string);
    maxchar(string);
    
}
