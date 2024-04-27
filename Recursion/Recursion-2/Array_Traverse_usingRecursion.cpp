#include<iostream>
 using namespace std;

 void print(int arr[], int i, int size){
  //Base case ->Stopping condition
  if(i>=size){
    return;
  }

  //1 Case solve krdiya
  cout<<arr[i]<<" ";
  //baki recursion sambhal lega
  print(arr,i+1,size);


 }

 int main(){
  int arr[] = {10,20,30,40,50};
  int size = 5;
  int i =0;

  print(arr,size,i);
 }