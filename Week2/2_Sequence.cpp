#include<iostream>
using namespace std;

void sequence(int n, int arr[]){
    int i,j,k,temp,c=0;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            for(k=0;k<n;k++){
                temp=arr[i]+arr[j];
                if(temp==arr[k]){
                    cout<<i+1<<","<<j+1<<","<<k+1 <<endl; //Print index values
                    c=1;
                }
            }
        }
    }
    if(c==0)
        cout<<"No Sequence Found"<<endl;
cout<<endl;
}

int main(){
    int T,n,i,c,key;
    cin>>T;
    cout<<endl;   //Enter number of test cases
    while(T--){
        cin>>n;     //Enter size of the array
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];   //Enter elements of the array
        }
        sequence(n,arr);
    }
return 0;
}

