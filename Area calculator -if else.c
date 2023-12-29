

#include <stdio.h>

int main()
#define pi 3.14
{
    int Area,rad,length,breadth,base,height;
    int choice;
    printf("Area of:\n1.Circle\n2.square\n3.Rectangle\n4.Triangle");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
     
    if(choice==1)
      {printf("Enter radius:");
      scanf("%d",&rad);
      Area=pi*rad*rad;
      printf("Area of circle=%d",Area);}
    else if(choice==2)
          { printf("Enter length:");
           scanf("%d",&length);
           Area=length*length;
           printf("Area of square=%d",Area);}
         else if(choice==3) 
                {printf("Enter length\nEnter breadth:");
                scanf("%d%d",&length,&breadth);
                Area=length*breadth;
                printf("Area of rectangle=%d",Area);}
              else if(choice==4)
                    { printf("Enter base\nEnter height:");
                     scanf("%d%d",&base,&height);
                     Area=1/2*base*height;
                     printf("Area of triangle=%d",Area);}
    
    return 0;
}
