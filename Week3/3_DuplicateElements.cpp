#include<iostream>
using namespace std;
void find_duplicates(int arr[],int n){
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
	for(int i=1; i<n; i++){
		if(arr[i] == arr[i-1]){
			cout<<"\n YES"<<endl;
			return;
		}
	}
	cout<<"\n NO"<<endl;

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
		cout<<" Enter the elements of the array: ";
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		find_duplicates(arr,n);

	}
return 0;
}
