/*Nama File     : BubbleSort.c*/
/*Deskripsi     : Mengurutkan data dengan Bubble Sorting*/
/*Pembuat       : Mutiara Permata Putri - 24060121140154
/*Tgl Pembuatan : Jumat, 06 05 2022 18:22*/

#include<stdio.h>

void BubbleSort(int arr[], int n)
{
    //Kamus Lokal
    int i;
    int j;
    int temp;

    //Algoritma
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (n-i-1); j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    //Kamus
    int array[100];
    int n;
    int i;
    int j;

    //Algoritma
    printf("Masukkan banyak elemen: ");
    scanf("%d", &n);
    printf("Masukkan nilai: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    BubbleSort(array, n);
    printf("Hasil pengurutan sebagai berikut: \n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
