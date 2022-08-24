#include<stdio.h>
int main()
{
       char str[100];
       int i,count=0,a=0,b=0;
       printf("enter a string:   \n");
       gets(str);

       while(str[i]!='\0')
       {
              if((str[i]>='a' && str[i]<='z')|| (str[i]>='A'&&str[i]<='Z'))
                 count++;
else if(str[i]>='0' && str[i]<='9' )
                     a++;
                     else
                            b++;

i++;


       }
       printf("count of alphabet = %d \n\n count of digit = %d \n\n count of special character = %d ",count,a,b);
       return 0;
}
