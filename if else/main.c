#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("1. Royal Cheese\n");
printf("2. Mc Deluxe\n");
printf("3. Mc Bacon\n");
printf("4. Big Mac\n");
int choix = 0;
printf("NUMERO de Votre choix ?\n");
scanf("%d",&choix);

switch(choix)
{
case 1:
    printf("vous avez choisi le Royal Cheese");
    break;
case 2:
    printf("vous avez choisi le Mc Deluxe");
    break;
case 3:
    printf("vous avez choisi le Mc Bacon");
    break;
case 4:
    printf("vous avez choisi le Big Mac");
    break;
}
}
