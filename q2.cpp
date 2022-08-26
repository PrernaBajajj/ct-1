//Prerna Bajaj
//2010990549
//Set 04
//Ques2
#include<bits/stdc++.h>
using namespace std;

bool checkCons(int arr[],int n){
  sort(arr,arr+n);
  for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]+1){
      return false;
      }
  }
  return true;
}
int main()
{
    int n;

    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
}
  if(checkCons(arr,n)==true){
    cout<<"The array contains consecutive integers from -1 to 5";
  }
  else
    cout<<"The array doesnot contain consecutive integers as element 4 is repeated";

    return 0;
}








