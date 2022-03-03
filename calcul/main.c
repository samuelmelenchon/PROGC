#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   {
   int resultat = 0 , nombre1 = 0,nombre2 = 0;

   printf("combien vaut le premier nombre: \n");
   scanf("%d",&nombre1);

   printf("combien vaut le second nombre: \n");
   scanf("%d",&nombre2);

   resultat = nombre1 + nombre2;
   printf("le resultat de ces deux nombres additione est: %d", resultat);
   return 0;
   }
}
