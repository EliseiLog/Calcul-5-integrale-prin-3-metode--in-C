#include <stdio.h>
#include "functii.h"

int main(void)
{
	struct calcul_integrala calcul[]={
		{integralaTrapez},
		{integralaDreptunghi},
		{integralaSimpson}
	};

	struct functii fct[]={
		{I1},
		{I2},
		{I3},
		{I4},
		{I5}
	};

	double (*pf)(double);

	int i,j;
	double x;

    for(i=0;i<=100;i++)
	{
		printf("-");
	}
	printf("\n");

	printf("Integrala\t Metoda trapezelor\t Metoda dreptunghiurilor\t Metoda Simpson\t\n");

	for(i=0;i<=100;i++)
	{
		printf("-");
	}
	printf("\n");

	meniuAfisare(calcul,fct);
	
	return 0;

}
