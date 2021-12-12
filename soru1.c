// ******************************************** YUSUF EREN GÜL*************************************************
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
int x;
// Dizi uzunluğunu kullanıcıdan alma
printf("Array uzunlugunu giriniz: ");
scanf("%d", &x);
int arr[x];
// Dizi elemanlarını kullanıcıdan alma
for(int i = 0; i < x; i++) {
    printf("Elemanlari giriniz: ");
    scanf("%d", &arr[i]);
}
// İlk 2 loop diziyi önlü arkalı şekilde dönüyor
for(int a = 0; a < x; a++) {
    for(int b = a + 1; b < x; b++) {
        if(arr[a] == arr[b]) {
          // Dizideki herhangi iki eleman aynı ise o elemanı ondan sonraki eleman ile değiştiriyor ve dizi uzunluğu bir azaltılıyor
            for(int c = b; c < x; c++) {
                arr[c] = arr[c + 1];
            }
            x--;
        } 
        
    }
}
printf("\n Elementler sonrasi Array: ");

for(int i = 0; i < x; i++) {
    printf("%d\t", arr[i]);
}
return 0;

}
 

   

