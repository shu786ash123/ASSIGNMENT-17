#include<stdio.h>
int main()
{
       char str[20];
       int i;
       fgets(str,20,stdin);

              for(i=0;str[i];i++);
              printf("length is %d ",i);
}
