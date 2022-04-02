/*Nama File     : Tetris2.c*/
/*Deskripsi     : Menampilkan susunan karakter ‘*’ dari suatu integer N>0 di layar*/
/*Pembuat       : Mutiara Permata Putri - 24060121140154
/*Tgl Pembuatan : Jumat, 01 04 2022 23:00*/

#include<stdio.h>

int main()
{
    //Kamus
    int N1; //Bilangan integer > 0
    int N2; //Bilangan integer > 0
    int j; //Counter *
    int i; //Counter space

    //Algoritma
    printf("Program menampilkan susunan karakter '*' \n");
    printf("Masukkan bilangan integer 1: ");
    scanf("%d", &N1);
    printf("Masukkan bilangan integer 2: ");
    scanf("%d", &N2);

    if (N1 && N2 <= 0)
    {
        printf("N harus positif");
    }
    else
    {
        for (i = 1; i <= N1; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf(" --%d", i);
            printf("\n", N1);
        }
        for (i = N2; i >= 1; i--)
        {
            for (j = i; j >= 1; j--)
            {
                printf("*");
            }
            printf(" --%d", i);
            printf("\n", N2);
        }
    }
    return 0;
}
