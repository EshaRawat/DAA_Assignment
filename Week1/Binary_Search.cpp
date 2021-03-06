#include<iostream>
using namespace std;
int binarySearch(int n,int arr[],int key){
     int right=n,left=0,mid;
     while(left<=right){
        mid=left+(right-left)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            left= mid+1;
        else
            right=mid-1;

     }
     return -1;   //Element not found
}
int main(){
    int n,i,result,key;
    cin>>n;     //Enter size of the array
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];   //Enter elements of the array
    }
    cin>>key;      //Enter element that you need to find
    result=binarySearch(n,arr,key);
    if(result!=-1){
        cout<<"\nPresent "<<result-1;
    }
    else
        cout<<"\nNot Present ";

    cout<<"\n\n";
return 0;
}
