#include <stdio.h>
#include<iostream>
#include<time.h>

using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
 
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)     
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] < arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  

int main(int argc, char **argv)
{
	clock_t start,end;

	start=clock();
	{
	int arr[20],n,i,key;
	printf("Enter the size");
	cin>>n;
	printf("Enter the elements");
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	printf("Enter the number");
	cin>>key;
	
	bubbleSort(arr,n);
	
	for(i=0;i<n;i++)
	{
		
		cout<<" "<<arr[i]<<endl;
	}
	
	
	for(i=0;i<key;i++)
	{
		
		{
		cout<<"-"<<arr[i];
	}
	}
		}
end=clock();
double t= double (end-start)/double(CLOCKS_PER_SEC);
cout<<"Time taken "<<t;
return 0;
	
}
