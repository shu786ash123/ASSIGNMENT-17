
#include<stdio.h>
int main()
{
       char str[100],temp;
       int j,i;
       printf("ENTER THE STRING:  \n");
      gets(str);
      int n=strlen(str);
              for(i=0;i<n-1;i++)
              {
                     for(j=i+1;j<n;j++)
                     {
                       if(str[i]>str[j])
                     {
                            temp = str[i];
                            str[i] = str[j];
                            str[j]=temp;

                     }
              }
}
printf("sorted string in assending order  is %s ",str);
return 0;
}
