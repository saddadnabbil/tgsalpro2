#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int nilai;  
    printf("=========================================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan melihat sebuah angka termasuk ke dalam ganjil atau genap\n");
    printf("=========================================================================\n\n");

    printf("Masukan sebuah angka (contoh: 89): ");
    scanf("%d", &nilai);

    if(  nilai % 2 == 0   ) {
        printf("\nAngka %d adalah Genap", nilai);
    } else {
        printf("\nAngka %d adalah Ganjil", nilai);
    }

    return 0;
}
