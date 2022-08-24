#include<stdio.h>
#include<string.h>
int main()
{
  char str[30];

       printf("enter a string IN LOWER CASE \n");
       fgets(str,30,stdin);

printf("GIVEN STRING IN UPPER CASE IS: %s",strupr(str));
return 0;
}
