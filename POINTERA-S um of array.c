//Sum of array -pointers

#include<stdio.h>
void
main ()
{
  int a[5],i, sum = 0;
  int *temp;
  printf ("Enter 5 elements: \n");
  
for(i=0;i<5;i++)
 scanf("%d",&a[i]);
 
temp = a; 
for(i=0;i<5;i++)
 { 
     sum = sum + *temp;
 temp++;
 }
printf(" The sum of array elements is % d ",sum);
}

