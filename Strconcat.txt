#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int newconcat(char *t,char *s)
{

    while(*t!='\0')
        t++;
    for(;*s!='\0';t++,s++)
+    {
        *t=*s;

    }
    *t='\0';

}
int main()
{
    char a[20],b[20],c[20];

    printf("Enter a String \n");
    gets(a);
    printf("Enter a String \n");
    gets(b);
    strcpy(c,a);

    printf("predefine %s \n",strcat(a,b));
    newconcat(c,b);
    printf("userdefine %s \n",c);
    return 0;


}
