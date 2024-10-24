#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Bilgisayarın 1 ile 100 arasındaki tuttuğu sayıyı tahim etme oyunu

int main() {
    int tahmin, sayi, denemesayisi = 0;

	//srand() fonksiyonu algoritmanın “ seed ”ini veya başlangıç ​​noktasını değiştirir.
	//rand() fonksiyonu 0 ile RAND_MAX aralığındaki sözde rastgele sayıyı döndürmek için kullanılır.

    srand(time(0));
    sayi = rand() % 100 + 1;  // 1 ile 100 arasında rastgele bir sayı

    printf("Bilgisayarin tuttugu 1 ile 100 arasidaki sayiyi tahmin et!.\n");
    do {
        printf("Tahmininizi girin: ");
        scanf("%d", &tahmin);
        denemesayisi++;

        if (tahmin > sayi) {
            printf("Lutfen daha kucuk bir sayi giriniz.\n");
        } else if (tahmin < sayi) {
            printf("Lutfen daha buyuk bir sayi giriniz.\n");
        } else {
            printf("Tebrikler! %d. denemenizde dogru tahmin ettiniz.\n", denemesayisi);
        }
    } while (tahmin != sayi);

    return 0;
}
