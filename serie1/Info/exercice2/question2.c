/*
L’ordonnancement de trois nombres entiers ( X , Y , Z ) dans l’ordre décroissant
*/

#include<stdio.h> 
#include <stdlib.h>

int main()
{
    //declaration
    int a, b, c;

    //saisie des valeurs
    printf("Donnez trois nombres entiers:\n");
    scanf("%d%d%d", &a, &b, &c);

    //ordonnancement
    // 1ere méthode
    /*
    if (a > b)
    {
        if (b > c)  printf("Ordre est %d %d %d\n", a , b, c);
        else
        {
            if (a > c)  printf("ordre est %d %d %d\n", a, c, b);
            else    printf("Ordre est %d %d %d\n", c, a, b);
        }
    }
    else
    {
        if (a > c)  printf("Ordre est %d %d %d\n", b, a, c);
        else
        {
            if (b > c)  printf("Ordre est %d %d %d\n", b, c, a);
            else    printf("Ordre est %d %d %d\n", c, b, a);
        }
    }
    */

// 2eme méthode

    int temp;
    while(a<b || b<c)
    {
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(b<c)
        {
            temp=b;
            b=c;
            c=temp;

        }
    }
    printf("L'ordre exact est le suivant : %d,%d,%d",a,b,c);

    return 0;
}
