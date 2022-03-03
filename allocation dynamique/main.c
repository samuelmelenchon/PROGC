#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* printf("char fait %d octets\n",sizeof(char));
    printf("int fait %d octets\n",sizeof(int));
    printf("long fait %d octets\n",sizeof(long));
    printf("double fait %d octets\n",sizeof(double));



    int* memoireAllouee = NULL;
    memoireAllouee = malloc(sizeof(int));
    if (memoireAllouee == NULL)
        {
        exit(0);
        }
        printf("Quel age avez vous?\n ");
        scanf("%d",memoireAllouee);
        printf("vous avez %d ans\n",*memoireAllouee);
    free(memoireAllouee);
    return 0;*/

    int nombreAmis = 0, i = 0;
    int* ageAmis = NULL;
    printf("Combien d'amis avez-vous ? ");
    scanf("%d", &nombreAmis);

    if (nombreAmis > 0)
    {
        ageAmis = malloc(nombreAmis * sizeof(int));
        if (ageAmis == NULL)
        {
            exit(0);
        }

        for (i = 0 ; i < nombreAmis ; i++)
        {
            printf("Quel age a l'ami numero %d ? ", i + 1);
            scanf("%d", &ageAmis[i]);
        }

        printf("\n\nVos amis ont les ages suivants :\n");
        for (i = 0 ; i < nombreAmis ; i++)
        {
            printf("%d ans\n", ageAmis[i]);
        }

        free(ageAmis);
    }

    return 0;
}
