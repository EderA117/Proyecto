#include<stdio.h>
#include<math.h>

int main()
{
	int decision;
	printf("Polinomios\nSe presenta un menu donde tendras solo 3 opciones\n");
	printf("Para intoducir el ponimonio y valuarlo presione 1\nPara multiplicar 2 polinomios presione 2\nPara dividri dos polinomios presione 3\n");
	scanf("%i",&decision);
	switch(decision)
	{
	case 1;
	for(i=0;i<=12;i++)
			{
				printf("Introduzca el coeficiente del polinomio: x^%i\n",i);				scanf("%f",&polinomio[i]);
			}
	break;
	case 2;
	break;
	case 3;
	break;
	}
}
