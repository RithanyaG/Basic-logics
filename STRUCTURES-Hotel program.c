#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,rt,x,max_rt;
   struct hotel
   {
       char name[30];
       int no;
       int street;
       char city[20];
       int grade;
       int rooms;
       float charge;
   };
   struct hotel h[10];
   
   printf("Enter number of hotels:");
   scanf("%d",&n);
   
   for(i=0;i<n;i++)
   {
       printf("HOTEL %d",i);
       printf("\nHotel name:");
       scanf("%s",h[i].name);
       printf("\nHotel Door number:");
       scanf("%d",&h[i].no);
       printf("\nHotel street:");
       scanf("%d",&h[i].street);
       printf("\nHotel city:");
       scanf("%s",h[i].city);
       printf("\nHotel grade:");
       scanf("%d",&h[i].grade);
       printf("\nNumber of hotel rooms:");
       scanf("%d",&h[i].rooms);
       printf("\nHotel room charge:");
       scanf("%f",&h[i].charge);
       
   }
      printf("\nEnter the rating of hotel that you need:");
       scanf("%d",&rt);
      printf("\nEnter the maximum room charge:"); 
       scanf("%d",&max_rt);
       
       printf("\nHere is your hotel:\n");
       for(i=0;i<n;i++)
       {
           
           if((h[i].charge<max_rt)&&(rt==h[i].grade))
           {
            printf("name-%s\ncity-%s\ngrade-%d\ncharge-%f",h[i].name,h[i].city,h[i].grade,h[i].charge);
            
           }
       }
    return 0;
}
