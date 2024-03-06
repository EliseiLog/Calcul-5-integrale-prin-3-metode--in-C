#include <stdio.h>
#include "functii.h"
#include <math.h>

double integralaTrapez(double a,double b,unsigned int n,double(*pf)(double))
{
	double sum;
	double x;
	double dx;
	double eps=1e-4;

	dx=(b-a)/n;

	sum=((*pf)(a)+(*pf)(b))/2;

	for(x=a+dx;fabs(x+dx-b)>eps;x+=dx)
	{
		sum+=((*pf)(x));
	}

	sum*=dx;

	return sum;
}

double integralaDreptunghi(double a,double b,unsigned int n,double(*pf)(double))
{
	double sum;
	double x;
	double dx;
	double eps=1e-4;

	dx=(b-a)/n;

	sum=((*pf)(a))*dx;

	for(x=a+dx;fabs(x+dx-b)>eps;x+=dx)
	{
		sum+=((*pf)(x));
	}

	sum*=dx;

	return sum;
}
double integralaSimpson(double a,double b,unsigned int n,double(*pf)(double))
{
	double sum;
	double x;
	double dx;
	double eps=1e-4;

	dx=(b-a)/n;

	sum=(*pf)(a)+(*pf)(b)+(*pf)((a+b)/2);

	for(x=a+dx;fabs(x+dx-b)>eps;x+=dx)
	{
		sum+=((*pf)(x));
	}

	sum*=dx;

	return sum;
}

double I1(double x)
{
	return exp(-(x*x));

}

double I2(double x)
{
	return x;

}

double I3(double x)
{
	return x*x;

}

double I4(double x)
{
	return sqrt(1+(1/x));
}

double I5(double x)
{
	return x/(1+x);
}

void meniuAfisare(struct calcul_integrala calcul[],struct functii fct[])
{
	int j;
	double rez;

	printf("I1\t");
	for(j=0;j<3;j++)
	{
		rez=calcul[j].f(0,1,99999,fct[0].f);
		printf("%23lf\t",rez);
	}
	printf("\n");

	printf("I2\t");
	for(j=0;j<3;j++)
	{
		rez=calcul[j].f(1,3,99999,fct[1].f);
		printf("%23lf\t",rez);
	}
	printf("\n");

	printf("I3\t");
		for(j=0;j<3;j++)
		{
			rez=calcul[j].f(0,3,99999,fct[2].f);
			printf("%23lf\t",rez);
		}
	printf("\n");
	
	printf("I4\t");
		for(j=0;j<3;j++)
		{
			rez=calcul[j].f(1,4,99999,fct[3].f);
			printf("%23lf\t",rez);
		}
	printf("\n");
	
	printf("I5\t");
	for(j=0;j<3;j++)
		{
			rez=calcul[j].f(1,5,99999,fct[4].f);
			printf("%23lf\t",rez);
		}
	printf("\n");
	
}

