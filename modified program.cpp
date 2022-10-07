#include<stdio.h>
int main()
{
   int modify(int*);
   int a=5;
   printf("%d\n",a);
   printf("%d",modify(&a));
   printf("\n%d",a);	
}
int modify(int *x)
{
	return(*x * *x);
}
