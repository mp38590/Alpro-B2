/*Nama File 	: CekBulan*/
/*Deskripsi 	: Mengetahui nama-nama bulan berdasarkan nomor bulan, yaitu 1 s.d. 12*/
/*Pembuat   	: 24060121140154-Mutiara Permata Putri*/
/*Tgl Pembuatan	: Rabu. 9 Maret 2022*/

#include <stdio.h>

int main()
{
    //Kamus

	int B;

    //Algoritma
  	printf("Program mengecek nama bulan \n");
  	printf("Masukkan nomor Bulan = ");
  	scanf("%d", &B);

  	if (B == 1)
  	{
        printf("Bulan tersebut merupakan Bulan Januari", B);
  	}
  	else if (B == 2)
  	{
        printf("Bulan tersebut merupakan Bulan Februari", B);
  	}
  	else if (B == 3)
  	{
        printf("Bulan tersebut merupakan Bulan Maret", B);
  	}
  	else if (B == 4)
  	{
        printf("Bulan tersebut merupakan Bulan April", B);
  	}
  	else if (B == 5)
  	{
        printf("Bulan tersebut merupakan Bulan Mei", B);
  	}
  	else if (B == 6)
  	{
        printf("Bulan tersebut merupakan Bulan Juni", B);
  	}
  	else if (B == 7)
  	{
        printf("Bulan tersebut merupakan Bulan Juli", B);
  	}
  	else if (B == 8)
  	{
        printf("Bulan tersebut merupakan Bulan Agustus", B);
  	}
  	else if (B == 9)
  	{
        printf("Bulan tersebut merupakan Bulan September", B);
  	}
  	else if (B == 10)
  	{
        printf("Bulan tersebut merupakan Bulan Oktober", B);
  	}
  	else if (B == 11)
  	{
        printf("Bulan tersebut merupakan Bulan November", B);
  	}
  	else if (B == 12)
  	{
        printf("Bulan tersebut merupakan Bulan Desember", B);
  	}
  	else
  	{
        printf("Masukkan nomor bulan tidak tepat", B);
  	}
}
