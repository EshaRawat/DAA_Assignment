#include<iostream>
using namespace std;

int diffElements(int arr[],int n,int key){
    int i,j,c=0;;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            int temp=arr[i]-arr[j];
            if(temp<0){
                temp*=-1;   //If number is negative then convert it to positive
            }
            if(temp==key)
                c++;        //Count the number of times the difference becomes equals to the key
        }
    }
return c;

}

int main(){
     int T,n,i,c,key,result;
    cin>>T;     //Enter number of test cases
    while(T--){
        cin>>n;     //Enter size of the array
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];   //Enter elements of the array
        }
        cin>>key;      //Enter element that you need to findement that you need to find

       result=diffElements(arr,n,key);
       if(result>= 0)
          cout<<endl<<result<<endl;
       else
          cout<<endl<<"\nDiffernce Not Present" << endl;
    }

cout<<"\n\n";
return 0;
}
