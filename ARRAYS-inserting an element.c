// inserting an element
#include <stdio.h>

int
main ()
{
  int ins[30]={1,2,3,4},i,p,j;
  
  printf("Enter the position in which the element has to be attached:");
  scanf("%d",&p);
   printf("Enter the element to be attached:");
   scanf("%d",&j);
  
  for(i=4;i>=p;i--)
   {
       ins[i+1]=ins[i];
       
   }
    
    ins[p]=j;
    
  printf("The array after inserting the element:");  
  for(i=0;i<=4;i++)
   printf(" %d",ins[i]);
    
}    
   
  
