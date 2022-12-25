#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,n1,n2;
	printf("Veuillez saisir les valeurs de N1 et N2 : ");
	scanf("%d",&n1);
	scanf("%d",&n2);

    while (n2 != 0)
    {
        x = n1 % n2;
        n1 = n2;
        n2 = x;
    }

    if (n1 == 0 ) printf("Deux nombres nuls n'ont pas de PGCD ");
    else printf("pgcd est: %d",n1);

    return 0;
}