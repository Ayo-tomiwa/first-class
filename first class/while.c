#include<stdio.h>

int main(){
    int a = 5;

    while(a < 10){
        printf("%d/n", a);
        a++;
    };

    for (int i = 15; i > 10; i--){
        if(i == 13){
            continue;
        }
    printf("%d/n", i);
    }

   return 0; 
}