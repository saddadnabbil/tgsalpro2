#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int tahun;  
    printf("===========================================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan melihat sebuah tahun masuk kepada tahun kabisat atau bukan\n");
    printf("===========================================================================\n\n");

    printf("Masukan tahun (contoh: 2021): ");
    scanf("%d", &tahun);

    if(  tahun % 400 == 0   ) {
        printf("\n%d adalah tahun kabisat", tahun);
    } else if ( tahun % 100 == 0 ) {
        printf("\n%d bukan tahun kabisat", tahun);
    } else if ( tahun % 4 == 0 ) {
        printf("\n%d adalah tahun kabisat", tahun);
    } else {
        printf("\n%d bukan tahun kabisat", tahun);
    }

    return 0;
}
