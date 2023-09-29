#include <stdio.h>

int main()
{
    int panjang_satu = 4;
    int panjang_dua = 5;
    int panjang_tiga = 7;
    int keliling = panjang_satu+panjang_dua+panjang_tiga;
    int harga_permeter = 85000;
    double harga_total = keliling*harga_permeter;

    printf("Diketahui : \n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", panjang_satu,panjang_dua,panjang_tiga);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", harga_permeter);

    printf("\nJawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %.0f\n", harga_total);


    return 0;
}