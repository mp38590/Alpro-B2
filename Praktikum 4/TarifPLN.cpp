/*Nama File     : TarifPLN.c*/
/*Deskripsi     : Menampilkan besarnya tarif listrik yang akan dikenakan*/
/*Pembuat       : Mutiara Permata Putri - 24060121140154
/*Tgl Pembuatan : Jumat, 18 03 2022 21:27*/

#include<stdio.h>

int main ()
{
    //Kamus
    int gol;
    int tarif;
    int daya;

    //Algoritma
    printf("Program menghitung besar tarif listrik \n");
    printf("Masukkan golongan : ");
    scanf("%d", &gol);
    printf("Masukkan daya : ");
    scanf("%d", &daya);

    if (daya <= 0)
    {
        printf("Masukkan daya tidak tepat \n");
    }

    else if (daya > 0 && daya <= 100)
    {
        switch (gol)
        {
            case 1:
                tarif = 1000 * 100;
            break;
            case 2:
                tarif = 2000 * 100;
            break;
            case 3:
                tarif = ((1000 * daya) + (0.1 * (1000 * daya)));
            break;
            default:
                printf("Masukan golongan tidak tersedia\n");
            break;
        }
    }

    else if (daya > 100 && daya < 1000)
    {
        switch (gol)
        {
            case 1:
                tarif = 1000 * daya;
            break;
            case 2:
                tarif = 2000 * daya;
            break;
            case 3:
                tarif = ((1000 * daya) + (0.1 * (1000 * daya)));
            break;
            default:
                printf("Masukan golongan tidak tersedia\n");
            break;
        }
    }

    else if (daya >= 1000)
    {
        switch (gol)
        {
            case 1:
                tarif = ((1000 * daya) + (0.1 * (1000 * daya)));
            break;
            case 2:
                tarif = ((2000 * daya) + (0.1 * (2000 * daya)));
            break;
            case 3:
                tarif = ((1000 * daya) + (0.1 * (1000 * daya)));
            break;
            default:
                printf("Masukan golongan tidak tersedia\n");
            break;
        }
    }
    {
        printf("Jumlah tagihan listrik yang dikenakan sebesar %d\n", tarif);
    }
    return 0;
}
