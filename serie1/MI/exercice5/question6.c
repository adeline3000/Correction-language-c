#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declaration 
    int a, b, quotient=0, reste;

    //saisie des valeurs
    printf("Veuillez saisir la valeur de A et B: \n");
    scanf("%d%d",&a,&b);

    reste = a;
    while (b<=reste)
    {
        reste-=b; //reste = reste - b;
        quotient++; //quotient = quotient + 1
    }
    
    printf("Le quotient de la division de %d par %d est : %d et le reste est : %d\n",a,b,quotient,reste); 

    return 0;
}