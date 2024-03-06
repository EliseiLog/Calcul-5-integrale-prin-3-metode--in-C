#ifndef TEST_H
#define TEST_H

double integralaTrapez(double a,double b,unsigned int n,double(*pf)(double));

double integralaDreptunghi(double a,double b,unsigned int n,double(*pf)(double));

double integralaSimpson(double a,double b,unsigned int n,double(*pf)(double));


struct calcul_integrala{
	double (*f)(double a,double b,unsigned int n,double (*)(double));
};

struct functii{
	double (*f)(double);
};

double I1(double x);
double I2(double x);
double I3(double x);
double I4(double x);
double I5(double x);

void meniuAfisare(struct calcul_integrala calcul[],struct functii fct[]);


#endif
