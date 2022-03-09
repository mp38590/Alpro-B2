/*Nama File 	: CekSeriPositif*/
/*Deskripsi 	: Mengetahui 3 buah tahanan dan menghasilkan total tahanan*/
/*Pembuat   	: 24060121140154-Mutiara Permata Putri*/
/*Tgl Pembuatan	: Rabu. 9 Maret 2022*/

#include <stdio.h>

int main()
{
    //Kamus

	float x;
	float y;
	float z;
	float m;

    //Algoritma
  	printf("Program mengecek seri positif \n");
  	printf("Masukkan sebuah bilangan = ");
  	scanf("%f", &x);
  	printf("Masukkan sebuah bilangan = ");
  	scanf("%f", &y);
  	printf("Masukkan sebuah bilangan = ");
  	scanf("%f", &z);

  	if (x >= 0, y >= 0, z >= 0);
  	{
        m = x + y + z;
        printf("Hasilnya adalah %.2f\n", m);
  	}
  	return 0;
}
