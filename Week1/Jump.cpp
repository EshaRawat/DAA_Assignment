#include<iostream>
#include<cmath>
using namespace std;
int jumpSearch(int arr[], int n, int key) {
   int start = 0;
   int prev=sqrt(n); //the square root of array length

   while(arr[prev]<=key && prev< n) {
      start=prev;
      prev+= sqrt(n);
      if(prev> n - 1)
        prev= n; //if right exceeds then bound the range
   }

   for(int i = start; i<prev; i++) { //perform linear search in selected block
      if(arr[i] == key)
         return i; //the position of the key
   }
   return -1;
}


int main() {
   int n,key, loc;
   cin>>n;    //Enter size of the array
   int arr[n]; //create an array of size n
    for(int i = 0; i< n; i++) {
      cin>>arr[i];        //Enter elements of the array
   }
   cin>>key;         //Enter element that you need to find

   loc=jumpSearch(arr,n,key);
   if(loc>= 0)
      cout<<"Present: " << loc+1 << endl;
   else
      cout<<"Not Present" << endl;

cout<<"\n\n";
return 0;
}
