#include<stdio.h>

main()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
	if(age>=11)
	printf("you can vote");
	if(age<11)
	printf("you cannot vote");
	return 0;
}
