#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void mergeSort(int array[], int min, int max, int threshold);

void insertionSort(int array[], int min, int max)
{
    int key ;
    for (int j = min + 1 ; j <= max ; j++)
    {
        key = array[j] ;
        int i = j - 1 ;
        while (i >= min && array[i] > key)
        {
            array[i+1] = array[i] ;
            i-- ;
        }
        array[i+1] = key ;
    }
}

void merge(int array[], int min, int max, int mid)
{
    int firstIndex = min;
    int secondIndex = mid + 1;
    int * tempArray = new int [max + 1];

    for (int index = min; index <= max; index++)
    {
        if (firstIndex <= mid && (secondIndex > max || array[firstIndex] <= array[secondIndex]))
        {
            tempArray[index] = array[firstIndex];
            firstIndex = firstIndex + 1;
        }
        else
        {
            tempArray[index] = array[secondIndex];
            secondIndex = secondIndex + 1;
        }
    }

    for (int index = min ; index <= max ; index++)
        array[index] = tempArray[index];
}


void mergeSort(int array[], int min, int max, int threshold)
{
    if ( (max - min + 1) <= threshold )
        insertionSort(array, min, max);
    else
    {
        int mid = (max+min) / 2;
        mergeSort(array, min, mid, threshold);
        mergeSort(array, mid+1, max, threshold);
        merge(array, min, max, mid) ;
    }
}

int main()
{
    const int threshold = 10;
    const int size = 1000;
    int array[size];
    srand(time(NULL));

    for (int i = 0 ; i < size  ; i++)
       array[i] = rand() % size;

    mergeSort(array, 0, size - 1, threshold);

    for (int i = 0; i < size - 1; i++)
       cout << array[i] << " ," ;

    return 0;
}




