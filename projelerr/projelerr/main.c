#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int kilo;
    float vki,boy;
    
    //Kilo ve boylar alınır
    printf("Kilonuzu giriniz : ");
    scanf("%d",&kilo);
    
    printf("Boyunuzu giriniz(Ör:1.75) : ");
    scanf("%f",&boy);
    
    printf("-----------------\n");
    //Vucut kitle indeksi hesaplanır
    vki=(float)(kilo)/(float)(boy*boy);
    
    printf("Vucut kitle indeksiniz = %.2f\n",vki);
    
    //Sonuca göre hangi gruba girildiği belirlenir
    if(vki<18)
        printf("Zayıf\n");
    else if (vki<25)
        printf("Normal\n");
    else if (vki<30)
        printf("Kilolu\n");
    else if (vki<35)
        printf("Obez\n");
    else
        printf("İleri derece obez\n");
    printf("\n");
    return 0;
}
