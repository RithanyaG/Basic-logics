

#include <stdio.h>
#include <math.h>

int main()
{
    int a,Square,Square_root,Cube,choice;
    printf("Enter a:");
    scanf("%d",&a);
    printf("1.Square\n2.Square root\n3.cube\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    
    switch(choice)
    {
    case 1:
    Square=a*a;
    printf("Square of a=%d",Square);
    break;
    
    case 2:
    Square_root=sqrt(a);
    printf("Square root of a=%d",Square_root);
    break;
    
    case 3:
    Cube=a*a*a;
    printf("Cube of a=%d",Cube);
    break;
    }
    
     return 0;
}
