#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
	
	int n;
	
	int largest=-1; 
	printf("How many numbers\n");
	cin>>n;
	printf("Enter the numbers");
	int NUM[n];
	
	for (int i=0 ; i<n ; i++)
	{
		cin>>NUM[i];
	}
	
	for (int i=0 ; i<n ; i++)
	{
		if (NUM[i]>largest)
			 largest = NUM[i];
			
	i++;
	}
	printf("largest number is %d ", largest  );
	
	return 0;
}
