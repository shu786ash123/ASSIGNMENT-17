#include<stdio.h>
#include<string.h>
int main()
{
       char str[50],a[50];
       int i,n;
       printf("ENTER A STRING:  \n");
fgets(str,50,stdin);
n=strlen(str);
for(i=0;i<n;i++)
       a[i]=str[i];
printf("copied string is : %s",a);
}
