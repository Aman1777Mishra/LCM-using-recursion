#include<stdio.h>
int recursion(int i, int j);
int main()
{
	int i,j;
	printf("Enter first number:");
	scanf("%d",&i);
	printf("Enter second number:");
	scanf("%d",&j);
	printf("LCM of given numbers is: %d",recursion(i,j));
	return 0;
}
int recursion(int i, int j)
{
   static int k=1;
	if(k%i==0 && k%j==0)
	{
		return k;
	}
	else
	{
		k++;
		recursion(i,j);
	}
}

