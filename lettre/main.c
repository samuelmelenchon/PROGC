#include <stdio.h>
#include <stdlib.h>
#define MAJEUR(age) if (age>18) \
                        printf("vous etes majeur\n");\
                    else \
                        printf("vous etes mineur\n");

int main(int argc, char *argv[])
{
    MAJEUR(22)

    MAJEUR(10)

    return 0;
}
