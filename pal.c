// palindrom or not
#include<stdio.h>
#include<string.h>
void pal(char *q)
  {
      int i=0,j=0,c;
     
     j=strlen(q);
         
      j=j-1;
     while(i<j)
        {
                  
         
              if(q[i]!=q[j])
               break;
                 i++;
                  j--;
                 
         
             }
    
          
            
        
      
             if(q[j]==q[i])
                printf("\n palindrom\n");
              else
                printf("\n not palindrom\n");
   }
void main()
{
char a[100];
printf("\n enter the string\n");
scanf("%s",a);
 pal(a);

}
