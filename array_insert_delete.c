#include<stdio.h>
int get();
void delete(int,int *,int); 
void insert(int,int*,int);
void main()
{
	int a,b,c,i,n;
	int ar[20];
	printf("\nenter number of elements\n");
	scanf("%d",&c);
	printf("\nenter the elements\n");

	for(i=0;i<c;i++)
		scanf("%d",&ar[i]);
	printf("\n");
	for(i=0;i<c;i++)
		printf("%d ",ar[i]);
        
         printf("\nenter option 1) delete 2) insert \n");
          scanf("%d",&a);
           if(a==1)
            {n=get();delete(n,ar,c);}
            else
           {n=get(); insert(n,ar,c);}
             
}
int  get()
{ 
int i,n;
   printf("\nenter the position\n");
     scanf("%d",&n);
   return n;
}
  
 void delete(int n,int *p,int c)
{ int i;
  for(i=n;i<c;i++)
    p[i]=p[i+1];
   for(i=0;i<c;i++)
    printf("%d ",p[i]);

}
  
 void insert(int n,int *p,int c)
{
   int i,k,a,h,q;
   
   
    
    printf("\n enter element to insert\n");
     scanf("%d",&k);
     for(i=c-1;i!=n;i--)
      {
        p[i+1]=p[i];
      }
      
       p[i]=k;
   
      
      
        
     

    
       
        
            
        

     
  
   for(i=0;i<c;i++)
    printf("%d ",p[i]);
}



































