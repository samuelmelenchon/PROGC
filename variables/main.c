#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
const int Nombres_de_vies = 5;
int nombresDeVies,niveau,ageDuJoueur;
nombresDeVies = 5;
niveau = 40;
ageDuJoueur = 0;
printf("vous avez %d vies et vous etes de niveau %d\n",nombresDeVies,niveau);//printf() affiche
printf("BAM\n");
nombresDeVies = 4;
printf("il ne vous reste plus que %d vies\n",nombresDeVies);
printf("Quel age avez vous? ");
scanf("%d",&ageDuJoueur); //Faire demander quelque chose a l'utilisateur
printf("Ah! vous avez donc %d ans !\n ",ageDuJoueur);
return 0;
}
