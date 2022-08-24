
#include<stdio.h>
int main()
{
    char a[20];
    gets(a);
    int freq[150]={0};
    int i=0;
    while (a[i]!= '\0')
    {
           freq[a[i]]++;     // freq[a[i++]]++;write this also
           i++;

    }
    for(i=0;i<150;i++)
    {
           if(freq[i]!=0)
              printf("%c ==> %d\n",i,freq[i]);
    }
    return 0;
}
