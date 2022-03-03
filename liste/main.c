#include <stdio.h>
#include <stdlib.h>

int Element = 0;

int main()
{
    typedef struct Liste Liste;
    struct Liste
{
    Element *premier;
};
    Liste *initialisation()
{
    Liste *liste = malloc(sizeof(*liste));
    Element *element = malloc(sizeof(*element));

    if (liste == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }

    element->nombre = 0;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
}
void insertion(Liste *liste, int nvNombre)
{
    /* Cr�ation du nouvel �l�ment */
    Element *nouveau = malloc(sizeof(*nouveau));
    if (liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->nombre = nvNombre;

    /* Insertion de l'�l�ment au d�but de la liste */
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}
