#include<stdio.h>
#include<string.h>
int main()
{
  char str[30];

       printf("enter a string IN UPPER CASE \n");
       fgets(str,30,stdin);

printf("GIVEN STRING IN LOWER CASE IS: %s",strlwr(str));
return 0;
}

