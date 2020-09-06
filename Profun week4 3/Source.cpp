#include<stdio.h>
int BD(int a)
{
	int g = a + 543;
	if (g < 0)
	{
		printf("Please insert number.\t That is greater or equal zero");
	}
	else
	{
	
	printf("B.D = %d",g);
	}
	return g;

}
int main()
{
	int c;
	printf("Enter A.D : ");
	scanf_s("%d", &c);
	
	BD(c);
	return 0;
}