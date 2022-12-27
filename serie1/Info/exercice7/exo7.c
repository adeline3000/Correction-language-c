#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,n,Un;

    //saisie de n
    do
    {
        printf("Donner un entier\n");
        scanf("%d",&n);
    } while (n<0);

    switch (n)
    {
    case 0:
        Un = 0;
        break;
    case 1:
        Un = 1;
        break;
    case 2:
        Un = 2;
        break;
    default:
        x=0;
        y=1;
        z=2;
        for (int i = 3; i <= n; i++)
        {
            Un = z+x;
            x=y;
            y=z;
            z=Un;
        }
    }

    printf("Le terme %d de la suite est: %d",n,Un);
	
	return 0;
}