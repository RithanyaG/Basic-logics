

#include <stdio.h>

int main()
{int bs,da,hra,gs;
    scanf("%d",&bs);
    da=bs*40/100;
    hra=bs*20/100;
    gs=bs+da+hra;
    
    printf("bs=%d\nda=%d\nhra=%d\ngs=%d",bs,da,hra,gs);

    return 0;
}
