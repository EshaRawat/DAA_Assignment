#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
	int c = 0;
	for(int i=1; i<n; i++){
		int key = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j = j-1;
			c++;
		}
		arr[j+1] = key;
	}
	cout<<"\n\n Sorted Array: ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<" Comparisons = "<<c<<endl;
	cout<<" Shifts = "<<c+(n-1)<<endl;

}
int main(){
	int t;
	cout<<" Enter number of test cases: ";
	cin>>t;
	while(t--){
		int n;
		cout<<"\n\n Enter the size of the array: ";
		cin>>n;
		int arr[n];
		cout<<" Enter elements in the array: ";
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		insertion_sort(arr,n);

	}
return 0;
}
