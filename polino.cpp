#include<stdio.h>
#include<math.h>

int main()
{
	int decision,i,f,g;
	float polinomio[12],polinomio1[12],polinomio2[12];
	printf("Polinomios\nSe presenta un menu donde tendras solo 3 opciones\n");
	printf("Para intoducir el ponimonio y valuarlo presione 1\nPara multiplicar 2 polinomios presione 2\nPara dividri dos polinomios presione 3\n");
	scanf("%i",&decision);
	switch(decision)
	{
	case 1:
		for(i=0;i<=12;i++)
			{
				printf("Introduzca el coeficiente del polinomio: x^%i\n",i);				scanf("%f",&polinomio[i]);
			}
			printf("Digite en que valor quiere valuar la funcion: \n");			scanf("%f",&valor);
			for(i=0;i<=12;i++)
			{
				resultado=resultado+(pow(valor,i)*polinomio[i]);
			}
			printf("El resultado es: %lf",resultado);
	break;
	case 2:
		for(f=0;f<=12;f++)
			{
				printf("Introduzca los coeficientes del 1er polinomio: x^%i\n",f);				scanf("%f",&polinomio1[f]);
			}
			for(g=0;g<=12;g++)
			{
				printf("Introduzca los coeficientes del 2do polinomio: x^%i\n",g);				scanf("%f",&polinomio2[g]);
			}
			for(f=0;f<=12;f++)
			{
				multiplicacion[s]=polinomio1[f]*polinomio[g];
				s++;
			}
	break;
	case 3:
	break;
	}
}
