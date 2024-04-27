#include<iostream>
using namespace std;

void printDigits(int n){
  //base case
  if(n==0){
    return;
  }

  //baki recursion sambhal  lega
  int newValueOFN = n/10;
  printDigits(newValueOFN);

  //1 case main solve karunga
  int digits = n%10;
  cout<<digits<<" ";
}


int main(){
  int n = 647;
  printDigits(n);
  return 0;
}