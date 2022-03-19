/*Nama File     : FaktorBill.c*/
/*Deskripsi     : Menampilkan faktor-faktor bilangan dari bilangan integer semabarang N*/
/*Pembuat       : Mutiara Permata Putri - 24060121140154
/*Tgl Pembuatan : Jumat, 18 03 2022 22:53*/

#include<stdio.h>

int main ()
{
    //Kamus
    int N;
    int i;

    //Algoritma
    printf("Program menampilkan faktor-faktor bilangan \n");
    printf("Masukkan bilangan N : ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("N harus bilangan positif");
    }
    else
    {
        i = 1;
        do
        {
            if(N % i == 0)
            {
                printf("| %d", i);
            }
            i++;
        }
        while(i <= N);
    }
    return 0;
}
