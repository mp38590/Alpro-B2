/*Nama File 	: CekHari*/
/*Deskripsi 	: Mengetahui nama-nama hari berdasarkan nomor hari, yaitu 1 s.d. 7*/
/*Pembuat   	: 24060121140154-Mutiara Permata Putri*/
/*Tgl Pembuatan	: Rabu. 9 Maret 2022*/

#include <stdio.h>

int main()
{
    //Kamus

	int H;

    //Algoritma
  	printf("Program mengecek nama hari \n");
  	printf("Masukkan nomor Hari = ");
  	scanf("%d", &H);

  	if (H == 1)
  	{
        printf("Hari tersebut merupakan Hari Senin", H);
  	}
  	else if (H == 2)
  	{
        printf("Hari tersebut merupakan Hari Selasa", H);
  	}
    else if (H == 3)
  	{
        printf("Hari tersebut merupakan Hari Rabu", H);
  	}
  	else if (H == 4)
  	{
        printf("Hari tersebut merupakan Hari Kamis", H);
  	}
  	else if (H == 5)
  	{
        printf("Hari tersebut merupakan Hari Jumat", H);
  	}
  	else if (H == 6)
  	{
        printf("Hari tersebut merupakan Hari Sabtu", H);
  	}
  	else if (H == 7)
  	{
        printf("Hari tersebut merupakan Hari Minggu", H);
  	}
  	else
  	{
        printf("Masukkan nomor hari tidak tepat", H);
  	}
}
