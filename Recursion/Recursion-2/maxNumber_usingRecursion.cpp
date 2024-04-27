#include<iostream>
#include<limits.h>
using namespace std;

void findmax(int arr[], int n, int i, int& maxi){
  //base case
  if(i>=n){
    return ;
  }

  //1 case solve karna
  //current element ko check kro for max
  if(arr[i]>maxi){
    maxi = arr[i];
  }

  //baki recursion sambhal lega
  findmax(arr, n, i+1, maxi);


}


int main(){

  int arr[] = {10,30,21,44,32,17,19,66};
  int n = 8;
  int i=0;

  int maxi = INT_MIN;
  findmax(arr,n, i,maxi);

  cout<<"Maximum number is maxi: "<<maxi<<endl;


  return 0;
}