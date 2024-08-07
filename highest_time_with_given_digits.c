#include <string.h>
#include <stdio.h>
#include <stdbool.h>

bool isvalid(int hh , int mm){
    return mm >= 0 && mm < 60 && hh >= 0 && hh < 24;
}


int getlatesttime(int array[], char *time){
    int maxHH = -1 ;
    int maxMM = -1;
    int hh = 0 , mm = 0 ;
    for(int i = 0 ; i < 4 ; i++){
        for (int j = 0 ; j < 4 ; j ++){
            if(i == j)continue;
            for (int k = 0 ; k < 4 ; k ++){
                if(j == k || k == i)continue;
                for(int l = 0 ; l < 4 ; l++){
                    if( k == l || l ==i || l ==j)continue;
                    
                    hh = array[i]*10 + array[j];
                    mm = array[k]*10 + array[l];
                    
                    if(isvalid(hh,mm)){
                        if(hh > maxHH || (hh == maxHH && mm > maxMM)){
                        maxHH = hh;
                        maxMM = mm;
                    }}
                    
                }
            }
        }
    }
    
  if(maxHH == -1){
      time[0] = '\0';
  }
  else 
    {  
        sprintf(time,"%02d:%02d",maxHH,maxMM);
    }
}

int main(){
    char digit[100];
    printf("Enter 4 Digits :");
    scanf("%s",digit);
    int array[4];
    char time[6];
    
    for (int i = 0 ; i < 4 ; i ++){
        array[i] = digit[i]-'0';
    }
    getlatesttime(array,time);
    printf("Result : %s",time);
}
