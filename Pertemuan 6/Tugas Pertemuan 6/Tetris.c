/*Nama File     : Tetris.c*/
/*Deskripsi     : Menampilkan susunan karakter ‘*’ dari suaru integer N>0 di layar*/
/*Pembuat       : Mutiara Permata Putri - 24060121140154
/*Tgl Pembuatan : Jumat, 01 04 2022 21:18*/

#include<stdio.h>

int main()
{
    //Kamus
    int N; //Bilangan integer > 0
    int i; //Counter space
    int j; //Counter *

    //Algoritma
    printf("Program menampilkan susunan karakter '*' \n");
    printf("Masukkan bilangan integer : ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("N harus positif");
    }
    else
    {
        for (i = 1; i <= N; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf(" --%d", i);
            printf("\n", N);
        }
    }
    return 0;
}
