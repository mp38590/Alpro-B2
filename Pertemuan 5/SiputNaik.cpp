/*Nama File     : SiputNaik.c*/
/*Deskripsi     : Menentukan waktu yang dibutuhkan siput untuk mencapai ketinggian N meter*/
/*Pembuat       : Mutiara Permata Putri - 24060121140154
/*Tgl Pembuatan : Minggu, 27 03 2022 11:00*/

#include<stdio.h>

int main()
{
    //Kamus
    float N; //Kedalaman lubang
    float h; //Ketinggian
    int t;  //Waktu yang dibutuhkan

    //Algoritma
    printf("Program menghitung waktu yang dibutuhkan siput mencapai ketinggian \n");
    printf("Masukkan kedalaman lubang : ");
    scanf("%f", &N);

    if (N <= 0)
    {
        printf("N harus positif");
    }
    else{
        t = 0;
        h = 0;
        while (h >= 0 && h < N )
        {
            h = h + 0.3;
            if (h < N)
            {
                h = h - 0.1;
            }
            t = t + 1;
        }
    }
    {
         printf("Waktu yang dibutuhkan siput untuk mencapai ketinggian tersebut adalah %d\n", t);
    }
    return 0;
}
