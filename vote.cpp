#include<stdio.h>
main()
{
	int age;
	printf("enter age");
    scanf("%d",&age);
    if (age>=18)
    printf("eligible");
    else
    printf("not eligible");
    if (age<18)
    printf("%d years to wait",18-age);
}
