#include <stdio.h>
#include <math.h>

int main()
{
    //segitiga siku2 
    int alas,tinggi,miring,keliling;
    float luas;

    alas = 5;
    tinggi = 12;
    miring = sqrt(pow(alas,2) + pow(tinggi,2));
    keliling = 5 + 12 + miring;
    luas = 0.5*alas*tinggi;

    //kita akan ke output
    printf("Diketahui : \n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);

    printf("\nJawab : \n");
    printf("SISI A = %d cm\n", tinggi);
    printf("SISI B = %d cm\n", miring);
    printf("SISI C = %d cm\n", alas);
    printf("Keliling = %d cm \n", keliling);
    printf("Luas = %.0f cm \n", luas);


    return 0;
}



