#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdio.h>

int tailleMot(char motSecret[]);
void initTableau(int* lettreTrouvee, int taille);
int gagne(int *lettreTrouvee, int nombreLettres);
char lireCaractere();
int rechercheLettre(char lettre, char motSecret[], int* lettreTrouvee);



#endif // MAIN_H_INCLUDED
