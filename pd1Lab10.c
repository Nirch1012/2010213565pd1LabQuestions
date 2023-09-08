#include <stdio.h>
#include <stdlib.h>

/*int main(){
    int numbers[8];
    int toplam=0;
    printf("lutfen 8 eleman giriniz");

    for(int i=0;i<8;i++){
        printf("Dizinin %d elemenanýný giriniz",i);
        scanf("%d",&numbers[i]);
        toplam += numbers[i];
        }
    int ortalama = toplam/8;
    printf("Ortlama=%d",ortalama);
}*/


/*int main() {
    int dizi[10];
    int sayi;
    int i = 0;

    printf("Sayilari girin (-1 cikis yapar):\n");
    do {
        printf("Sayi: ");
        scanf("%d", &sayi);

        if (sayi != -1) {
            if (i < 10) {
                dizi[i] = sayi;
                i++;
            } else {
                printf("Diziye daha fazla eleman eklenemez. -1 girerek cikis yapabilirsiniz.\n");
            }
        }
    } while (sayi != -1);
    printf("Girilen sayilarin kareleri:\n");
    for (int j = 0; j < i; j++) {
        printf("%d nin karesi: %d\n", dizi[j], dizi[j] * dizi[j]);
    }

    return 0;
}*/


/*int main(){
    int sayi=99999;
    int dizi[5];
    int kalan=0;

    for(int i=1;i<=5;i++){
            kalan = sayi%10;
            dizi[i]=kalan;
            sayi = sayi/10;
            printf("Dizi %d:%d \n",i,dizi[i]);
            }
}*/

/*int main() {
    int array[10];
    printf("8 eleman giriniz:\n");

    for (int i = 0; i < 10; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Dizinin tersi:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d", array[i]);
        if (i > 0) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}*/

