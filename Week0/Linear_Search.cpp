#include<iostream>
using namespace std;
int main(){
    int i,n,key,c=0,j,comp=0;
    cout<<"\t\tLINEAR SEARCH";
    cout<<"\n\n Enter number of terms in an array: ";
    cin>>n;
    int a[n];
    cout<<" Enter the elements of the array: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\n Enter the key that you wish to find: ";
    cin>>key;
    for(i=0;i<n;i++){
        comp++;
        if(a[i]==key){
            j=i;
            c=1;
            break;
        }
    }
    if(c!=0){
        cout<<"\n Key found at position "<<j+1;
        cout<<"\n Number of comparisons made: "<<comp;
        cout<<"\n";
    }
    else{
        cout<<" Key not found";
    }
    cout<<"\n\n";
return 0;
}
