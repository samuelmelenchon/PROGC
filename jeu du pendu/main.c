#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "main.h"

int main(int argc, char* argv[])
{
    char lettre = 0; // Stocke la lettre propos�e par l'utilisateur (retour du scanf)
    char motSecret[] = "ROUGE"; // C'est le mot � trouver
    int coupsRestants = 10; // Compteur de coups restants (0 = mort)
    int nombreLettres = tailleMot(motSecret);
    int *lettreTrouvee = NULL;// Tableau de bool�ens. Chaque case correspond � une lettre du mot secret. 0 = lettre non trouv�e, 1 = lettre trouv�e //Q1
    lettreTrouvee = malloc(nombreLettres * sizeof(int)); //Q2
    initTableau(lettreTrouvee, nombreLettres); //Q3

    printf("Bienvenue dans le Pendu !\n\n");

    while (coupsRestants > 0 && !gagne(lettreTrouvee, nombreLettres))
    {
        printf("\n\nIl vous reste %d coups a jouer", coupsRestants);
        printf("\nQuel est le mot secret ? ");

        /* On affiche le mot secret en masquant les lettres non trouv�es
                Exemple : *A**ON */
        for (int i = 0 ; i < nombreLettres ; i++)
        {
            if (lettreTrouvee[i])
                printf("%c", motSecret[i]);
            else
                printf("*");
        }

        printf("\nProposez une lettre : ");
        lettre = lireCaractere();

        // Si ce n'�tait PAS la bonne lettre
        if (!rechercheLettre(lettre, motSecret, lettreTrouvee))
        {
            coupsRestants--; // On enl�ve un coup au joueur
        }
    }

    if (gagne(lettreTrouvee, nombreLettres))
        printf("\n\nGagne ! Le mot secret etait bien : %s\n", motSecret);
    else
        printf("\n\nPerdu ! Le mot secret etait : %s \n", motSecret);

    return 0;
}

int tailleMot(char motSecret[])
{
    int nombreLettre = 0;
    for(int i = 0; motSecret[i] != '\0'; i++)
    {
        nombreLettre++;
    }
    return nombreLettre;
}

char lireCaractere()
{
    char caractere = 0;

    caractere = getchar(); // On lit le premier caract�re
    caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas d�j�

    // On lit les autres caract�res m�moris�s un � un jusqu'au \n (pour les effacer)
    while (getchar() != '\n') ;

    return caractere; // On retourne le premier caract�re qu'on a lu
}

void initTableau(int* lettreTrouvee, int taille)
{
    for(int i = 0; i < taille; i++)
    {
        lettreTrouvee[i] = 0;
    }
}

int gagne(int *lettreTrouvee, int nombreLettres)
{
    int i = 0;
    int joueurGagne = 1;

    for (i = 0 ; i < nombreLettres ; i++)
    {
        if (lettreTrouvee[i] == 0)
            joueurGagne = 0;
    }

    return joueurGagne;
}


int rechercheLettre(char lettre, char motSecret[], int* lettreTrouvee)
{
    int i = 0;
    int bonneLettre = 0;

    // On parcourt motSecret pour v�rifier si la lettre propos�e y est
    for (i = 0 ; motSecret[i] != '\0' ; i++)
    {
        if (lettre == motSecret[i]) // Si la lettre y est
        {
            bonneLettre = 1; // On m�morise que c'�tait une bonne lettre
            lettreTrouvee[i] = 1; // On met � 1 la case du tableau de bool�ens correspondant � la lettre actuelle
        }
    }

    return bonneLettre;
}
