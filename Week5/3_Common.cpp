#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<" Enter size of array 1: ";
	cin>>m;
	int arr2[m];
	cout<<" Enter the element of array 1: ";
	for(int i=0; i<m; i++){
		cin>>arr2[i];
	}
	cout<<" Enter size of array 2: ";
	cin>>n;
	int arr[n];
	cout<<" Enter the element of array 2: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int j=0, i=0;
	cout<<"\n Common elements: ";
	while(i<m && j<n){
		if(arr2[i]>arr[j])
			j++;
		else if(arr2[i]<arr[j])
			i++;
		else if(arr2[i] == arr[j]){
			cout<<arr[j]<<" ";
			i++;
			j++;
		}
	}
cout<<"\n\n";
return 0;
}
