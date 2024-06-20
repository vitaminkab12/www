#include <stdio.h>

#include "askname.h"

int main(int argc, char **argv)
{
    char first[255], last[255];

    askname(first, last);

    printf("Hey there, %s %s!\n", first, last);
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    return 0;
}



