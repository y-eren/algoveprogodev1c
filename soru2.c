// ******************************************** YUSUF EREN GÜL*************************************************

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
int x, aranan_deger;
// Dizi uzunluğunu kullanıcıdan alma
printf("Array uzunlugunu giriniz: ");
scanf("%d", &x);
int arr[x];
// Dizi elemanlarını kullanıcıdan alma
for(int i = 0; i < x; i++) {
    printf("Elemanlari giriniz: ");
    scanf("%d", &arr[i]);
}
// Aranması gereken değeri bulma
printf("Aranmasi gereken deger: " );
scanf("%d", &aranan_deger);
// Bu sayaç aranan değer bulunursa ve bulunmazsa değişerek konsolda sadece 1 değerin çıkmasını sağlıyor
int dogruluk_sayaci = 0;
for(int i = 0; i < x; i++) {
    if(arr[i] == aranan_deger) {
        printf("%d", i);
        dogruluk_sayaci++;
    }
    
}
// Sayacın sıfır olması durumunda konsolda sadece - 1 yazıyor
    if(dogruluk_sayaci == 0) {
    for(int j = 0; j < x; j++) {
        if(arr[j] != aranan_deger)
        printf("%d", -1);
        break;
    }
    }

    return 0;
}