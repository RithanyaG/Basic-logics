#include<stdio.h>

int main()
{ 
    int dis,in_m,in_cm;
    float in_ft,in_inch;
    
    scanf("%d",&dis);
    
    in_m=dis*1000;
    in_cm=dis*100000;
    in_ft=dis*3280.84;
    in_inch=dis*39370;
    
    printf("dis=%dkm",dis);
    printf("\nin_m=%dm",in_m);
    printf("\nin_cm=%dcm",in_cm);
    printf("\nin_ft=%fft",in_ft);
    printf("\nin_inch=%finches",in_inch);
    
    return 0;
    
}    