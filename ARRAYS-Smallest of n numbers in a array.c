//Smallest among n numbers in a array

#include <stdio.h>

int main()
{
    int nums[10],flag=1,i;
    printf("Enter the numbers:\n");
    for(i=0;i<10;i++)
     {
      scanf("%d",&nums[i]);
      printf("\n%d",nums[i]);
     }
    for(i=0;i<10;i++) 
    {
      if(nums[i]<flag)
       flag=nums[i];
    }
       printf("\nThe smallest number is:%d",flag);
    
    return 0;
}