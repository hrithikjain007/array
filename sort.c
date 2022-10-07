//find the largest and smallest in array

#include<stdio.h>
void sort(int *q)
{
int i,j,t;
   for(i=0;i<5;i++)
   {
     for(j=0;j<5;j++)
         if(q[i]>q[j])
          { 
            t=q[i];
		q[i]=q[j];
		q[j]=t;     
           }
   }
 printf("\nlargest is %d",q[0]);
 printf("\nsmallest is %d",q[4]);
}
void main()
{
int a[5],i;
printf("\n enter the elements\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
sort(a);

}
