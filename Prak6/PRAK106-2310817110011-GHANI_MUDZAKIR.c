#include <stdio.h>

int main()
{
    int a = 4;
    int b = 8;
    int c = 3;
    int bool_hasil = 0;
    

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);

    //case pertama
    printf("Apakah a sama dengan b ? jawabannya adalah ");
    if (a==b)
    {
        printf("%d\n", 1);
    }else{
        printf("%d\n", 0);
    }

    //case kedua 
    printf("Apakah b lebih besar dari c ? jawabannya adalah ");
    if (b > c )
    {
        printf("%d\n", 1);
    }else{
        printf("%d\n", 0);
    }

    //case terakhir
    printf("Apakah a tidak sama dengan c ? jawabannya adalah ");
    if (a!=c)
    {
        printf("%d\n", 1);
    }else{
        printf("%d\n", 0);
    }

    
  
    return 0;
}