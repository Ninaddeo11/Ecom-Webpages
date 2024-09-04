#include<stdio.h>
void main ()
{
	int a,b,c,d,e;
	float sum,percentage; 
	scanf (%d %d %d %d %d , &a &b &c &d &e);
	sum= a+b+c+d+e;
	printf ("\n%d,sum");
	percentage= (sum/500) * 100;
	printf ("/n%d,percentage");
	if (percentage<=40&&percentage>50)
	printf ("pass");
	if (percentage <=50&&percentage>60)
	printf ("second class");
	if (percentage <= 60&&percentage>66)
	printf ("1st class");
	if (percentage<=66&&percentage>80)
	printf("Distinction");
	
}
