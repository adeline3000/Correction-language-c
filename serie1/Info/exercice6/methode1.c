#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x1,x2,n1,n2;
	printf("Veuillez saisir les valeurs de N1 et N2 : ");
	scanf("%d",&n1);
	scanf("%d",&n2);

    x1 = n1;
    x2 = n2;

    while (x1 != x2)
    {
        if(x1 > x2) x1 = x1 - x2;
        else x2 = x2 - x1;
    }

    if (x1 == 0 ) printf("pgcd de %d et %d est: %d",n1,n2,x2);
    else printf("pgcd de %d et %d est: %d",n1,n2,x1);

    return 0;
}