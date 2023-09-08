#include <stdio.h>
#include <stdlib.h>

/*int main() {
    int A, B, C;
    printf("Uc tane sayi giriniz (A, B, ve C): ");
    scanf("%d %d %d", &A, &B, &C);

    if (A >= B && A >= C) {
        printf("En buyuk sayi A: %d\n", A);
    } else if (B >= A && B >= C) {
        printf("En buyuk sayi B: %d\n", B);
    } else {
        printf("En buyuk sayi C: %d\n", C);
    }

    return 0;
}*/

/*int main() {
    int N;
    int factorial = 1;

    printf("Negatif olmayan bir sayi giriniz: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Negatif sayilarin faktoriyeli alýnamaz.\n");
    } else {
        for (int i = 1; i <= N; i++) {
            factorial *= i;
        }
        printf("%d! = %d\n", N, factorial);
    }

    return 0;
}*/
/*int main(){
    int i;
    for(int i=1000; i<=2000 ; i+=2){
        printf("%d\n",i);
    }
return 0;

}*/

/*int main() {
    int num, orjinalNum, tersNum = 0, kalan;

    printf("Bir sayi giriniz: ");
    scanf("%d", &num);

    orjinalNum = num;

    while (num != 0) {
        kalan = num % 10;
        tersNum = tersNum * 10 + kalan;
        num /= 10;
    }

    if (orjinalNum == tersNum) {
        printf("%d palindrom.\n", orjinalNum);
    } else {
        printf("%d palindrom degil.\n", orjinalNum);
    }

    return 0;
}
*/
/*
#include <math.h>

double calculateSeriesSum(double x, int n);

int main() {
    double x;
    int n;

    printf("x deðerini girin: ");
    scanf("%lf", &x);

    printf("Terim sayýsýný (n) girin: ");
    scanf("%d", &n);

    double toplam = calculateSeriesSum(x, n);

    printf("Seri toplamý = %lf\n", toplam);

    return 0;
}

double calculateSeriesSum(double x, int n) {
    double toplam = 1.0;

    for (int i = 1; i <= n; i++) {
        double terim = pow(x, i) / 1.0;
        for (int j = 1; j <= i; j++) {
            terim /= j;
        }
        toplam += terim;
    }

    return toplam;
}

*/


