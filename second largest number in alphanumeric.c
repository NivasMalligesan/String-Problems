// Online C compiler to run C program online
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char word[100];
    printf("Enter the word : ");
    scanf("%s",word);
    int array[100];
    int count = 0 ;
    
    for(int i=0 ; i < strlen(word) ; i++){
        if(isdigit(word[i])){
            array[count] = word[i] - '0';
            count++;
        }
    }
    
    for(int i = 0 ; i <count-1 ;i++){
        for(int j = i +1 ; j < count ; j++){
            if(array[i] < array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
        printf("Second largest digit: %d\n", array[1]);
    
}
