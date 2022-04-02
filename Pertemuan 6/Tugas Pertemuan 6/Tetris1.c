/*Nama File     : Tetris1.c*/
/*Deskripsi     : Menampilkan susunan karakter ‘*’ dari suatu integer N>0 di layar*/
/*Pembuat       : Mutiara Permata Putri - 24060121140154
/*Tgl Pembuatan : Jumat, 01 04 2022 22:30*/

#include<stdio.h>

int main()
{
    //Kamus
    int N; //Bilangan integer > 0
    int j; //Counter *
    int i; //Counter space

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
        for (i = N; i >= 1; i--)
        {
            for (j = i; j >= 1; j--)
            {
                printf("*");
            }
            printf(" --%d", i);
            printf("\n", N);
        }
    }
    return 0;
}
