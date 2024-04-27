#include<iostream>
using namespace std;
#include<vector>

int binarySearch(vector<int>arr, int s, int e, int key){
  //base case
  //Case 1 ->Key not found
  if(s>e){//s>e -> invalid array
    return -1;
  }

  int mid = (s+e)/2;
  //case 2->Key found
  if(arr[mid]==key){ //this is 1 case solve kardiya
    return mid;
  }

  //baki recursion sambhal lega
  if(arr[mid]<key){
    int ans = binarySearch(arr,mid+1,e,key);
    return ans;
    
  }
  else{
    int ans = binarySearch(arr,s,mid-1,key);
    return ans;
  }
}



int main(){
  
  vector<int>v{10,20,23,45,67,12};
  int target = 67;
  int n = v.size();
  int s =0;
  int e = n-1;
  
  int ans = binarySearch(v,s,e,target);
  cout<<"Answer is: "<<ans;

  return 0;
}