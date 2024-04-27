#include<iostream>
using namespace std;
#include<vector>

int checksorted(vector<int> &arr, int& n, int i){
  //base case
  if(i==n-1){
    return true;
  }

  //1 case solve kardo
  if(arr[i+1]<arr[i]){
    return false;
  }

  //baaki recursion sambhal lega
  return checksorted(arr,n,i+1);
}


int main(){
  
  vector<int>v{10,20,30,40,50};
  int n = v.size();
  int i =0;

  bool isSorted = checksorted(v,n,i);

  if(isSorted){
    cout<<"Array is Sorted";
  }
  else{
    cout<<"Array is not sorted";
  }
  return 0;
}