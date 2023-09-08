#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

/*void main()
{
    int sayi1,sayi2;
    int toplam;
    printf("iki sayi giriniz: ");
    scanf("%d %d",&sayi1,&sayi2);
    toplam= sayi1+sayi2;
    printf("toplam:%d",toplam);
}
*/
/*int main(){
    int a, b;
    int c=0;
    printf("iki sayi giriniz: ");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d  b=%d",a,b);
    return 0;
}*/
/*int main(){
    int vize,son,ogrenciNo;
    int ortalama=0;
    printf("ogrenci no giriniz: ");
    scanf("%d",&ogrenciNo);
    printf("vize notunu giriniz: ");
    scanf("%d",&vize);
    printf("final notunu giriniz: ");
    scanf("%d",&son);
    ortalama=vize*0.4 + son*0.6;
    printf("Ogrenci No:%d Ortalamaniz: %d",ogrenciNo,ortalama);
    return 0;
    }*/

/*int main() {
    double r, sonuc;
    int islem;

    printf("Cap giriniz: ");
    scanf("%lf", &r);

    printf("Islem seciniz (1 cevre, 2 alan): ");
    scanf("%d", &islem);

    switch (islem) {
        case 1:
            sonuc = 2 * pi * r;
            printf("Cevre: %.2lf\n", sonuc);
            break;
        case 2:
            sonuc = pi * r * r;
            printf("Alan: %.2lf\n", sonuc);
            break;
        default:
            printf("Gecersiz Islem.\n");
            break;
    }

    return 0;
}*/

/*int main() {
    int miktar, num_100, num_50, num_20, num_10;
    printf("Miktar giriniz(10'un kati olmali): ");
    scanf("%d", &miktar);

    if (miktar % 10 != 0) {
        printf(" 10'un katý olmalý.\n");
        return 1;
    }

    num_100 = miktar/ 100;
    miktar %= 100;

    num_50 = miktar / 50;
    miktar %= 50;

    num_20 = miktar / 20;
    miktar %= 20;

    num_10 = miktar / 10;

    printf("100'luk banknot sayisi: %d\n", num_100);
    printf("50'lik banknot sayisi: %d\n", num_50);
    printf("20'lik banknot sayisi: %d\n", num_20);
    printf("10'luk banknot sayisi: %d\n", num_10);

    return 0;
}
/*

