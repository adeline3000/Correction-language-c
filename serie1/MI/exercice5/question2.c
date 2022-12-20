#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declaration 
    int a,b,produit,n;

    //saisie des valeurs
    printf("Veuillez saisir la valeur de A et B: \n");
    scanf("%d%d",&a,&b);

    //traitement
    if (b<0) n = -b;
    else n = b;

    produit = 0;

    for (int i = 0; i < n; i++)
    {
        produit +=a; //produit = produit + a
    }
    
    if (b<0) printf("Le produit de %d et %d = %d",a,b,-produit);
    else printf("Le produit de %d et %d = %d",a,b,produit);

    return 0;
}