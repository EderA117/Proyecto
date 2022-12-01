#include<stdio.h>
#include<math.h>

int main()
{
	int decision,i;
	float polinomio[12],valor;
	printf("Polinomios\nSe presenta un menu donde tendras solo 3 opciones\n");
	printf("Para intoducir el ponimonio y valuarlo presione 1\nPara multiplicar 2 polinomios presione 2\nPara dividri dos polinomios presione 3\n");
	scanf("%i",&decision);
	switch(decision)
	{
	case 1:
	i=0;
	while(i<=12)
			{
				printf("Introduzca el coeficiente del polinomio: x^%i\n",i);				scanf("%f",&polinomio[i]);
				i++;
			}
			printf("Digite en que valor quiere valuar la funcion: \n");			scanf("%f",&valor);
	break;
	case 2:
	break;
	case 3:
	break;
	}
}
