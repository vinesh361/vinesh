#include<stdio.h>
#include<string.h>
int main()
  {
   struct student
     {
      int regno;
      char name[20];
      int mark;
      };
   struct student s1;
   s1.regno = 192112037;
   strcpy(s1.name,"ZAID");
   s1.mark=90;
   printf("Regno = %d\n",s1.regno);
   printf("Name  = %s\n",s1.name);
   printf("Mark  = %d",s1.mark);
   return 0;
  }
