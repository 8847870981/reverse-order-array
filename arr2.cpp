#include <iostream>
using namespace std;

int main() {
	int n;
	cout<< "the size of array:\n";
	cin>> n;
	int arr[n],i,min;
	for ( i=0; i<n; i++)
	{
	cout<< "enter the no. in the array :\n";
	cin>> arr[i];
	}
	cout<< "the smallest no. entered in the array :\n";
	min=arr[0];
	for ( i=0; i<n; i++)
	{
	if ( min>arr[i] )
	{
		min=arr[i];
	}
	cout<<  min << '\n';
	}
	return 0;
}
