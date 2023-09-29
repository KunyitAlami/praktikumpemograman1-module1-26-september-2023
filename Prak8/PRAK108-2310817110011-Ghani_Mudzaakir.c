#include <stdio.h>
#include <math.h>


int main()
{
    float phi = 3.14;
    int banyak_putaran = 5;
    int jumlah_kilometer = 14;

    //berarti kita harus mencari dalam 1 putaran pa dengklek menempuh berapa kilometer
    float keliling_satuputaran = (float)14/5;
    
    //kita cari jari jari nya
    // keliling = 2 * phi * jari jari
    // jari jari = keliling / phi * 2

    float jarijari = (float)keliling_satuputaran/phi;
    jarijari = jarijari/2;
    jarijari = round(jarijari*100.0)/100.0;

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", banyak_putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n\n", jumlah_kilometer);
 
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jarijari);

    return 0;
}


