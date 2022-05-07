/*Nama File     : SelectSort.c*/
/*Deskripsi     : Mengurutkan data dengan Selection Sorting*/
/*Pembuat       : Mutiara Permata Putri - 24060121140154
/*Tgl Pembuatan : Sabtu, 07 05 2022 21:33*/

#include <stdio.h>

void SelectionSort(int arr[], int n)
{
    //Kamus Lokal
    int i;
    int j;
    int min;
    int temp;

    //Algoritma
    for(i = 0; i < (n-1); i++)
    {
        min = i;

        for(j = (i+1); j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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
    printf("Masukkan jumlah banyaknya data: ");
    scanf("%d", &n);
    printf("Masukkan %d angka integer\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    SelectionSort(array, n);
    printf("Hasil pengurutan sebagai berikut:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
