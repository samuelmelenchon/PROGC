#include <stdio.h>
#include <stdlib.h>


int triple(int nombre)
{
return nombre*3;

}
int main()
{
    int nombreEntre =0,nombreTriple =0;
    printf("entrez un nombre ... ");
    scanf("%d",&nombreEntre);

    nombreTriple =triple(nombreEntre);
    printf("le triple du nombre est %d",nombreTriple);
    return 0;
}
