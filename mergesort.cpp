#include<iostream>
using namespace std;
void merging(int *arr, int *L, int f, int *R, int r)
{
    int i = 0, j = 0, k = 0;
    while(i < f && j < r)
    {
        if(L[i] < R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
    }
    while(i < f)
    {
        arr[k++] = L[i++];
    }
    while(j < r)
    {
        arr[k++] = R[j++];
    }
}

void mergeSort(int *arr, int n)
{
    if(n == 1)
    {
        return;
    }

    int mid = n/2;

    int *L = new int[mid];
    int *R = new int[n-mid];

    for(int i = 0; i < mid; i++)
    {
        L[i] = arr[i];
    }
    for(int i = mid; i < n; i++)
    {
        R[i-mid] = arr[i];
    }

    mergeSort(L, mid);
    mergeSort(R, n-mid);

    merging(arr, L, mid, R, n-mid);
    delete(L);
    delete(R);
}

int main()
{
    cout << "Recursive Merge Sort\n";
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //mergeSort(arr, 0, n-1);
    mergeSort(arr, n);

    cout << "Sorted array is: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}