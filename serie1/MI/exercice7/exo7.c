#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, produit=0;

	printf("Veuillez saisir les valeurs de A et B : \n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	while (a!=0)
	{	
        //printf("a = %d b = %d produit = %d\n",a, b, produit);
		if(a%2 == 1)
		{
			produit+=b;
            a--;
            //printf("a = %d b = %d produit = %d\n",a, b, produit);
		}
		b=b*2;
		a=a/2;
	}

	printf("le produit  est %d",produit);
	
    return 0;
}
	
	
