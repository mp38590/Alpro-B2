/*Nama File     : CekSempurna.c*/
/*Deskripsi     : Mengecek apakah suatu bilangan integer sembarang N (N>0) merupakan bilangan sempurna atau bukan*/
/*Pembuat       : Mutiara Permata Putri - 24060121140154
/*Tgl Pembuatan : Jumat, 25 03 2022 22:05*/

#include<stdio.h>

int main()
{
    //Kamus
    int N; //Bilangan integer sembarang
    int i; //Counter
    int c; //Cek bilangan sempurna

    //Algoritma
    printf("Program mengecek bilangan sempurna atau bukan \n");
    printf("Masukkan bilangan N : ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("N harus bilangan positif");
    }
    else
    {
        c = 0;

        for (i = 1; i < N; i++)
        {
            if (N % i == 0)
            {
                c = c + i;
            }
        }
            if (N == c)
            {
                printf("N merupakan bilangan sempurna");
            }
            else
            {
                printf("N bukan merupakan bilangan sempurna");
            }
        {
            printf("\n\n", N);
        }
    }
    return 0;
}
