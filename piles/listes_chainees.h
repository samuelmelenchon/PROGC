#ifndef H_LISTE_CHAINEE
#define H_LISTE_CHAINEE

typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant;
};

typedef struct Pile Pile;
struct Pile
{
    Element *premier;
};

Pile *initialisation();
void insertion(Pile *pile, int nvNombre);
void suppression(Pile *pile);
void afficherListe(Pile *pile);

#endif
