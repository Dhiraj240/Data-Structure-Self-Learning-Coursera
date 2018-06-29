#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char *newcpy(char *t,char *s)
{
  int i=0;
    while(*(s+i)!='\0')
    {
        *(t+i)=*(s+i);
        i++;
    }
    *(t+i)='\0';
    return t;
}
int main()
{
    char a[20],b[20];
    int l,f;
    printf("Enter a String \n");
    gets(a);
    printf("Enter a String \n");
    gets(b);
    l=strcpy(a,b);
    f=newcpy(b,a);
    printf("predefine %s \n",l);
    printf("userdefine %s \n",f);
    return 0;


}
