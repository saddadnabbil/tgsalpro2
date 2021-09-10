#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nilai;  
    printf("=========================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan mengubah nilai angka menjadi nilai huruf\n");
    printf("=========================================================\n\n");

    printf("Masukan nilai anda (1-100): ");
    scanf("%f", &nilai);

    if( nilai > 90  ) {
        printf("\nNilai Anda A\n");
    } else if( nilai > 80 || nilai < 89.99  ) {
        printf("\nNilai Anda A-\n");
    } else if( nilai > 75 || nilai < 79.99  ) {
        printf("\nNilai Anda B+\n");
    } else if( nilai > 70 || nilai < 74.99  ) {
        printf("\nNilai Anda B\n");
    } else if( nilai > 65 || nilai < 69.99  ) {
        printf("\nNilai Anda B-\n");
    } else if( nilai > 60 || nilai < 64.99  ) {
        printf("\nNilai Anda C+\n");
    } else if( nilai > 56 || nilai < 59.99  ) {
        printf("\nNilai Anda C\n");
    } else if( nilai > 50 || nilai < 54.99  ) {
        printf("\nNilai Anda D\n");
    } else {
        printf("\nNilai Anda E\n");
    }

    return 0;
}
