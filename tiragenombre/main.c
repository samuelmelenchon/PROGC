#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int nombreMystere = 0,nombreEntre = 0;
const int MAX = 100,MIN = 1;

srand(time(NULL));
nombreMystere = (rand()%(MAX - MIN + 1))+MIN;

do
   {
    printf("quel est,le nombre? ");
    scanf("%d",&nombreEntre);

    if (nombreMystere>nombreEntre)
        printf("plus grand\n\n");
    else if (nombreMystere<nombreEntre)
        printf("plus petit\n\n");
    else
        printf("bravo vous avez trouve le nombre\n\n");
   }while(nombreEntre != nombreMystere);
   return 0;
}
