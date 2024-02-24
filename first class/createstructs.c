#include<stdio.h>
#include<string.h>

struct product{
    char name[100];
    float price$;
    int quantity;
};

int main() {
    struct product bournvita ={"bournvita", 200, 20};

    struct product milk ={"milk", 300, 30};

    milk.price$ = 500;
    milk.quantity = 40;
    strcpy(milk.name,"bournvitamilo");

    struct product cowbell ={"cowbell", 300, 35};

    printf("%s\n", bournvita.name);
    printf("%f\n", bournvita.price$);
    printf("%d\n", bournvita.quantity);


    printf("%s\n", milk.name);
    printf("%f\n", milk.price$);
    printf("%d\n", milk.quantity);

    printf("%s\n", cowbell.name);
    printf("%f\n", cowbell.price$);
    printf("%d\n", cowbell.quantity);

    return 0;
};