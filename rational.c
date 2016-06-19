#include<stdio.h>

typedef struct{
	int numerator;
    int denominator;
}rational;

rational makerational(int, int);
 rational add_rational(rational, rational);
 rational mul_rational(rational,rational);
 rational equal_rational(rational,rational);
 
int  main()
{
	rational r1=makerational(1,3);
	rational r2=makerational(2,5);
	rational sum=add_rational(r1, r2);
	printf("%d/%d\n", sum.numerator, sum.denominator);
	rational result=mul_rational(r1, r2);
	printf("%d/%d\n", result.numerator, result.denominator);
}

	rational makerational(int a,int b)
{
	rational r_number;
	r_number.numerator=a;
	r_number.denominator=b;
	return r_number;   
	}	
		
 rational add_rational(rational r1, rational r2)
 {
	rational sum;
	sum.numerator=(r1.numerator*r2.denominator)+(r2.numerator*r1.denominator);
	sum.denominator=(r1.denominator*r2.denominator);
	return sum;	
}


rational mul_rational(rational r1, rational r2)
 {
	rational result;
	result.numerator=(r1.numerator*r2.numerator);
	result.denominator=(r1.denominator*r2.denominator);
	return result;	
}


rational equal_rational(rational r1, rational r2)
 {
	if(r1.numerator*r2.denominator==r1.denominator*r2.numerator)
	{
		printf("equal");
	}
	else
	{
	printf("not equal");
	}
}
