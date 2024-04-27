#include<iostream>
#include<limits.h>
using namespace std;

void findmin(int arr[], int i, int size, int& mini){
  //base case->stopping condition
  if(i>=size){
    return;
  }

  //1 case solve kr denge
  if(arr[i]<mini){
    mini = arr[i];
  }

  //baki recursion sambhal lega
  findmin(arr, i+1, size , mini);
}


int main(){
  int arr[] = {10,20,45,1,78,90};
  int size = 6;
  int i=0;

  int mini = INT_MAX;
  findmin(arr,i,size,mini);
  cout<<"Minimum numbser is: "<<mini;
}
