/*Nama File     : TunjAnak.c*/
/*Deskripsi     : Menampilkan besarnya tunjangan anak yang diberikan*/
/*Pembuat       : Mutiara Permata Putri - 24060121140154
/*Tgl Pembuatan : Jumat, 18 03 2022 20:24*/

#include<stdio.h>

int main ()
{
    //Kamus
    int jumlahanak;
    int gajipokok;
    int tunjangan;

    //Algoritma
    printf("Program menghitung besar tunjangan anak \n");
    printf("Masukkan jumlah anak : ");
    scanf("%d", &jumlahanak);
    printf("Masukkan gaji pokok : ");
    scanf("%d", &gajipokok);
    {
        if (jumlahanak <= 3)
            tunjangan = jumlahanak * (0.1 * gajipokok);
        else
            tunjangan = 3 * (0.1 * gajipokok);
        {
            printf ("Maka tunjangan yang didapat sebesar %d\n", tunjangan);
        }
    }
    return 0;
}
