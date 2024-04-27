#include<iostream>
using namespace std;

int Climbstair(int n){
  //Base case->stopping condition
  if(n==0 || n==1){
    return 1;
  }

  int ans = Climbstair(n-1)+Climbstair(n-2);
  return ans;
}

int main(){
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  int ans = Climbstair(n);
  cout<<"The answer is: "<<ans<<endl;
  return 0;
}