#include<iostream>

using namespace std;


void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    
    for (int j = low; j <= high - 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
       
        int pi = partition(arr, low, high);
        
        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void Ksmallest(int arr[],int start,int end,int k)
{
    for (int i= start; i<=end; i++)
    {
        
        if(i==start+k-1)
        {
            cout<<k<<"th Smallest element is "<<arr[i]<<endl;
            break;
        }
        
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    int start,end,k;
    cout<<"Enter the Start index";
    cin>>start;
    cout<<"Enter the stop index";
    cin>>end;
    cout<<"Enter the value for k";
    cin>>k;
    Ksmallest(arr,start,end ,k);
    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}

