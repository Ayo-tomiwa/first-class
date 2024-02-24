#include<stdio.h>

int main() {

    // int i = 2;
    // for (int i = 0;i < 20; i++ ){
    //   if(i  < 20){
    //       continue;
    //   } 
    // printf("%d/n", i); 
    // }
    int ages[] = {20, 30, 40, 50, 60};

    ages[1] = 900;
    int scores[4];

    for (int i = 0; i < 5; i++) {
        printf("%d/n", ages[i]);
    }

    return 0;
}


