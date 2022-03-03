#include <stdio.h>
#include <stdlib.h>
#include "liste_chainee.h"


int main()
{
    Pile*maPile = initialisation();

    empilage_element(maPile, 4);
    empilage_element(maPile, 8);
    empilage_element(maPile, 15);
    empilage_element(maPile, 16);
    empilage_element(maPile, 23);
    empilage_element(maPile, 42);

    printf("\nEtat de la pile :\n");
    afficherPile(maPile);

    printf("Je depile %d\n", depilage_element(maPile));
    printf("Je depile %d\n", depilage_element(maPile));
    printf("Je depile %d\n", depilage_element(maPile));
    printf("Je depile %d\n", depilage_element(maPile));
    printf("Je depile %d\n", depilage_element(maPile));

    printf("\nEtat de la pile :\n");
    afficherPile(maPile);
    return 0;
}

