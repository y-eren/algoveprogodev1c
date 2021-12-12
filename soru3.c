// ******************************************** YUSUF EREN GÜL*************************************************
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main () {
     char dizi[10] = "yusuferen";
    char temp[10];
    int j = 0;
    // Dizideki tanımlanmış elemanlar geçici olarak oluşturulmuş diziye kopyalanıyor
    for(int i = 9; i >= 0; i--) {
         temp[j] = dizi[i];
            j++; 
    }
    //Konsola elemanları kopyalanmış dizi yazdırılıyor
    for(int k =0; k < 10; k++) {
    printf("%c", temp[k]);
    }   
    return 0;
}


