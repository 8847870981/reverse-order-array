    #include <iostream>
    using namespace std;
     
    int main() {
    	int n;
    	cout<< "the size of array:\n";
    	cin>> n;
    	int arr[n],i,max;
    	for ( i=0; i<n; i++)
    	{
    	cout<< "enter the no. in the array :\n";
    	cin>> arr[i];
    	}
    	cout<< "the largest no. entered in the array :\n";
    	max=arr[0];
    	for ( i=0; i<n; i++)
    	{
    	if ( max<arr[i] )
    	{
    		max=arr[i];
    	}
    	cout<<  max << '\n';
    	}
    	return 0;
    }
