// concatinate two strings

#include<stdio.h>
void con(char *a,char *b)
{
int i=0,j=0;
while(a[i])
i++;
 while(b[j])
  {
    a[i]=b[j];
     i++;j++;
   }
  printf("\n%s",a);
}
void main()

{
char a[50],b[50];
 printf("\n enter the string\n");
  scanf("%s",a);
  scanf("%s",b);
con(a,b);
}
