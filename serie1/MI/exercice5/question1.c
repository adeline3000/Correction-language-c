#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declaration 
    float x,y;
    int n,m;

    //saisie des valeurs
    printf("Veuillez saisir la valeur de X puis celle de n: \n");
    scanf("%f %d",&x,&n);

    //traitement
    if (n<0) m = -n;
    else m = n;
    
    y = 1; 
    for (int i = 0; i < m; i++)
    {
        y*=x;
    }

    if (n>=0) printf("%f a la puissance %d = %f",x,n,y);
    else printf("%f a la puissance %d = %f",x,n,1/y);


    return 0;
}