#include <stdio.h>

int main()
{
    double sepatu_a = 400000;
    double sepatu_b = 350000;
    double harga_diskon_sepatu_a = sepatu_a*13/100;
    double harga_diskon_sepatu_b = sepatu_b*21/100;

    printf("Harga Sepatu A adalah %.0f\n", sepatu_a);
    printf("Harga Sepatu B adalah %.0f\n", sepatu_b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n", sepatu_a-harga_diskon_sepatu_a);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f\n", sepatu_b-harga_diskon_sepatu_b);


    return 0;
}