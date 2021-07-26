#include<iostream>
using namespace std;
int duplicate(int n,int arr[],int key){
     int right=n,left=0,mid,c=1;
     while(left<=right){
        mid=left+(right-left)/2;    //Binary Search
        if(arr[mid]==key)
        {
            if(arr[left]!=key){
                left= left+1;
            }
            if(arr[right]!=key){
                right=right-1;
            }
            else{
                return (right-left+1);
            }

        }
        else if(arr[mid]<key)
            left= mid+1;
        else
            right=mid-1;
     }
     return c;   //Element not found
}
int main(){
    int T,n,i,c,key;
    cin>>T;     //Enter number of test cases
    while(T--){
        cin>>n;     //Enter size of the array
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];   //Enter elements of the array
        }
        cin>>key;      //Enter element that you need to find
        c=duplicate(n,arr,key);
        if(c>1){
            cout<<"\n"<<key<<" - "<<c;
            cout<<"\n\n";
        }
        else{
            cout<<"\nKey Not Present ";
            cout<<"\n\n";
        }
    }
    cout<<"\n\n";
return 0;
}
