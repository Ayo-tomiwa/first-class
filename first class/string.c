#include<stdio.h>

int main(){
    // Unlike other prog lang, we use char instead of a string.
    // int ages[] = {20, 30, 40, 50, 60};
    // ages[1] = 900;
    // c counts space as a value
    char name[] = "Ja mes";

    name[2] = 'Y';

    int scores[4];

    scores[0] = 20;
    scores[1] = 25;
    scores[2] = 30;
    scores[3] = 35;

    printf("%d/n", name);

    return 0;
}