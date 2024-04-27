#include<iostream>  
#include<vector>     
#include<limits.h>  
using namespace std;  

// Function to find the minimum number of elements required to achieve the target sum
int solve(vector<int>& arr, int target){
  // Base case: If the target sum is already achieved
  if(target == 0){
    return 0;  // Return 0 as no more elements are needed
  }
  // Base case: If the target sum is negative (not achievable)
  if(target < 0){
    return INT_MAX;  // Return INT_MAX to indicate impossibility
  }


  // Initialize minimum steps required to INT_MAX
  int mini = INT_MAX;
  
  // Iterate over each element in the array
  for(int i = 0; i < arr.size(); i++){
    // Recursively call solve function to find minimum steps for target - arr[i]
    int ans = solve(arr, target - arr[i]);
    
    // If the result is not INT_MAX (solution found)
    if(ans != INT_MAX){
      // Update mini with the minimum of its current value and ans+1
      mini = min(mini, ans + 1);
    }
  }
  return mini;  // Return the minimum steps required
}

// Main function
int main(){
   vector<int> arr{1, 2};  // Initialize an array with values 1 and 2
   int target = 5;  // Define the target sum

   // Call the solve function to find the minimum number of elements required
   int ans = solve(arr, target);
   
   // Print the result
   cout << "Answer is: " << ans << endl;
   
   return 0;  // Return 0 to indicate successful execution
}
