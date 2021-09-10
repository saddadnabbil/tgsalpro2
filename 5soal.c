#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int index;
    char nama[100];
    printf("========================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan mengenkripsi nama menggunakan sandi A-N\n");
    printf("========================================================\n\n");

    printf("Masukan nama dalam huruf kapital (SANDHIKAGALIH): ");
    scanf("%s", &nama);

    printf("\nBerikut adalah hasil enkripsi nama anda : ");

    for( int index = 0; nama[index] != '\0'; index++ ) {
        //printf("%c",nama[index]);
        switch( nama[index] ) {
            case 'A':
                printf("N");
                break;
            case 'B':
                printf("O");
                break;
            case 'C':
                printf("P");
                break;
            case 'D':
                printf("Q");
                break;
            case 'E':
                printf("R");
                break;
            case 'F':
                printf("S");
                break;
            case 'G':
                printf("T");
                break;
            case 'H':
                printf("U");
                break;
            case 'I':
                printf("V");
                break;
            case 'J':
                printf("W");
                break;
            case 'K':
                printf("X");
                break;
            case 'L':
                printf("Y");
                break;
            case 'M':
                printf("Z");
                break;
            case 'N':
                printf("A");
                break;
            case 'O':
                printf("B");
                break;
            case 'P':
                printf("C");
                break;
            case 'Q':
                printf("D");
                break;
            case 'R':
                printf("E");
                break;
            case 'S':
                printf("F");
                break;
            case 'T':
                printf("G");
                break;
            case 'U':
                printf("H");
                break;
            case 'V':
                printf("I");
                break;
            case 'W':
                printf("J");
                break;
            case 'X':
                printf("K");
                break;
            case 'Y':
                printf("L");
                break;
            case 'Z':
                printf("M");
                break;
            default:
                printf("%c", nama[index]);
            }
    }
    
    return 0;
}