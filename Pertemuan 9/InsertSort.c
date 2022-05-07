/*Nama File     : InsertSort.c*/
/*Deskripsi     : Mengurutkan data dengan Insertion Sorting*/
/*Pembuat       : Mutiara Permata Putri - 24060121140154
/*Tgl Pembuatan : Jumat, 06 05 2022 19:00*/

#include<stdio.h>

void InsertionSort(int arr[], int n)
{
    //Kamus Lokal
    int i;
    int j;
    int temp;

    //Algoritma
    for (i = 1; i < n; i++)
    {
        temp = arr[i];

        for (j = (i-1); j >= 0 && arr[j] > temp; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}

int main()
{
    //Kamus
    int n;
    int array[100];
    int i;
    int j;
    int temp;

    //Algoritma
    printf("Masukkan jumlah banyaknya data: ");
    scanf("%d", &n);
    printf("Masukkan nilai: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    InsertionSort(array, n);
    printf("Hasil pengurutan sebagai berikut: \n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
