#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float nilai;  
    printf("============================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan melihat apakah anda lulus di ujian kali ini\n");
    printf("============================================================\n\n");

    printf("Masukan nilai anda (contoh: 89): ");
    scanf("%f", &nilai);

    if( nilai > 75  ) {
        printf("\nSELAMAT! ANDA LULUS DI UJIAN KALI INI.");
    } else {
        printf("\nTETAP SEMANGAT! ANDA BELUM LULUS DI UJIAN KALI INI");
    }

    return 0;
}
