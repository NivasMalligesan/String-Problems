#include <stdio.h>
#include <string.h>

int romanval(char c){
    switch (c){
        case 'M' : return 1000;
        case 'C' : return 100;
        case 'L' : return 50 ;
        case 'X' : return 10 ;
        case 'V' : return 5;
        case 'I' : return 1 ;
        default : return -1;
    }
}

int isvalid(char *roman){
    for(int i = 0 ; i < strlen(roman); i++){
        if(romanval(roman[i]) == -1){
            return 0 ;
        }
    }
    return 1;
}

int romantoint(char *roman){
    int previous=0;
    int current =0;
    int total = 0 ;
    
    for(int i = strlen(roman)-1 ; i >= 0 ; i--){
        current = romanval(roman[i]);
        if(current > previous){
            total += current;
        }else{
            total -= current;
        }
        previous = current;
    }
    
    return total;
}


int main(){
    char roman[100];
    int integer;
    printf("Enter the Roman Number : ");
    scanf("%s",roman);
    
    
    if(!isvalid(roman)){
        printf("Enter the valid roman number");
    }else{
        integer = romantoint(roman);
        printf("%d",integer);
    }
}
