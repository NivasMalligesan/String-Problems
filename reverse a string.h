// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>


void reverse(char* string){
    int left = 0 ; 
    int right = strlen(string)-1;
    
    while(left < right){
        char temp = string[right] ;
        string[right] = string[left];
        string[left] = temp;
        right--;
        left++;
    }
    
    printf("Reversed String : %s",string);
}

int main() {
    char string[100]; 
    printf("Enter the siring : ");
    scanf("%s",string);
    
    reverse(string);
}
