

#include <stdio.h>

int main()
{
    int age;
    l1: scanf("%d",&age);
    
    if((age>=1)&&(age<=100))
     printf("age accepted");
    else
     {printf("Enter correct age.");
      goto l1;
     }

    return 0;
}
