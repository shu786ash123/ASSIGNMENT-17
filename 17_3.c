#include<stdio.h>
int main()
{
       char str[30];
       int i,j,count=0;
       printf("enter a string \n");
       fgets(str,20,stdin);



       for(i=0;str[i];i++)
                     {

       if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
              count++;
}

printf("occurence of vowel in this string is:  %d ",count);
}


