/*My first C Program*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float sum,per;
	a=10,
	b=20,
	c=40,
	d=40,
	e=50,
	sum=a+b+c+d+e;
	printf("%f",sum);
	per=(sum/500)*100;
	printf ("\nthe sum of percentage of all subjects=%f", per);
}

