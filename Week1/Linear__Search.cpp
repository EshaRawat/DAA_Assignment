
 //PROGRAM FOR LINEAR SEARCH

#include<iostream>
using namespace std;
int main(){
    int T,i,n,key,c=0,j;
    cin>>T;  //Number of test cases
    while(T--){
        cin>>n;   //Size of the array
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];   //Elements in the array
        }
        cin>>key;       //Element that you need to search in the array
        for(i=0;i<n;i++){
            if(a[i]==key){
                j=i;
                c=1;
                break;
            }
        }
        if(c==1){
            cout<<"\nPresent "<<j+1;   //Print Present if Element is there in the array
            cout<<"\n";
        }
        else{
            cout<<"\nNot Present "<<n;       ////Print Not Present if Element is there in the array
        }
        cout<<"\n\n";
    }
return 0;
}
