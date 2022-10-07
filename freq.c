#include <stdio.h>
void count(int *);
void main()
{
int a[5],i;
printf("\n enter elements\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
count(a);
}
void count(int *q)
{
int i,j,c;
  for(i=0;i<5;i++)
     {
        c=0;
     for(j=0;j<5;j++)
       {
          if(q[i]==q[j])
            c++;
          }
                 
            printf("\n %d occurs in the array %d times \n",q[i],c);
      }
}
