#include<stdio.h>

int main() {
    // creating a variable
    int age = 20;

// a pointer stores the memeory address of a value or variables, it could be 
    // printf("%p/n", &age);

    // creating a pointer to variable age
    int *agePtr = &age;

    // creating a variable
    char gender = 'f';
    // creating a pointer to variable gender
    char *genderPrt = &gender;

    // printing the memory address of age
    printf("%p/n", agePtr);
    // printing the memory address of gender
    printf("%p/n", genderPrt);
    // printing the value of gender
    printf("%c/n", *genderPrt);


    return 0;
}