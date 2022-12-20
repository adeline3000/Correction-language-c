#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration 
    int nbre1, nbre2, cpt1=1, cpt2=1;

    //saisie du premier nombre
    do
    {
        printf("Entrez le premier nombre a tester: \n");
        scanf("%d", &nbre1);
    } while (nbre1 < 0); 

    //saisie du 2eme nombre
    do
    {
        printf("Entrez le 2eme nombre a tester: \n");
        scanf("%d", &nbre2);
    } while (nbre2 < 0); 

    for (int i = 2; i <= nbre1/2; i++)
    {
        if (nbre1 % i == 0) cpt1+=i; //cpt1 = cpt1+i;   
    }

    for (int i = 2; i <= nbre2/2; i++)
    {
        if (nbre2 % i == 0) cpt2+=i; //cpt1 = cpt1+i;   
    }

    if (cpt1 == nbre2 && cpt2 == nbre1) printf("Ces deux nombres sont amis");
    else printf("Ces deux nombres ne sont pas amis");

    return 0;

}