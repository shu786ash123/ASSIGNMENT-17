#include<stdio.h>
int main()
{
       char str[20],c;
       int i,count=0;
       printf("enter a string \n");
       fgets(str,20,stdin);
       printf("enter  a character: ");
scanf("%c",&c);
for(i=0;str[i];i++)
{
       if(c==str[i])
              count++;
}
printf("occurence of given character %c is: %d ",c,count);
}

