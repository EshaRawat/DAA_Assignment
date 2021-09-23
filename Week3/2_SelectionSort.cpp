#include <iostream>
using namespace std;
void selection_sort(int arr[], int n){
	int min, c=0, s=0;
	for(int i=0; i<n-1; i++){
		min = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[min]){
				min = j;

			}
			c++;
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
		s++;
	}
	cout<<"\n\n Sorted Array: ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<" Comparisons = "<<c<<endl;
	cout<<" Swaps = "<<s<<endl;
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
		cout<<" Enter elements of the array: ";
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		selection_sort(arr,n);
	}
return 0;
}
