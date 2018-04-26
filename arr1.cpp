    #include <iostream>
    using namespace std;
     
    int main() {
    	int n;
    	cout<< "the size of array:\n";
    	cin>> n;
    	int arr[n],i;
    	for ( i=0; i<n; i++)
    	{
    	cout<< "enter the no. in the array :\n";
    	cin>> arr[i];
    	}
    	cout<< "the reverse order of printing array :\n";
    	for ( i=n; i>=0; i--)
    	{
    	cout<< arr[i];
     
    	}
    	return 0;
    }
