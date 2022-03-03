#include <stdio.h>
#include <stdlib.h>
#include "liste_chainee.h"


int main()
{
    Liste *maListe = initialisation();

    insertion_premier(maListe, 4);
    insertion_premier(maListe, 8);
    insertion_premier(maListe, 15);
    suppression_premier(maListe);

    afficherListe(maListe);

    return 0;
}

