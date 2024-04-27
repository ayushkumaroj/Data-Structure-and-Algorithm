#include<iostream>
using namespace std;
#include<limits.h>

int solve(int n, int x, int y, int z){
  //base case
  if(n==0){
    return 0;
  }

  if(n<0){
    return INT_MIN;
  }

  int ans1 = solve(n-x, x,y,z)+1;
  int ans2 = solve(n-y, x, y,z)+1;
  int ans3 = solve(n-z, x,y,z)+1;

  int ans = max(ans1, max(ans2, ans3));
  return ans;
}
int main(){
  int n=7;
  int x=5;
  int y=2;
  int z=2;

  //solve function ->Return maximum number of segment
  int ans = solve(n,x,y,z);

  if(ans<0){
    ans = 0;
  }

  cout<<"Answer is: "<<ans<<endl;
  return 0;
  
}





// This code is a recursive implementation to solve a specific problem. Let's break it down step by step:

// 1. **Function `solve`**: 
//    - This function takes four parameters: `n`, `x`, `y`, and `z`.
//    - `n` represents the length of a rod or a stick.
//    - `x`, `y`, and `z` represent the lengths of three types of segments into which the rod can be cut.
//    - The function returns the maximum number of segments that can be obtained by cutting the rod of length `n` using segments of lengths `x`, `y`, and `z`.
//    - The function is implemented recursively.

// 2. **Base Cases**:
//    - If `n` is 0, it means the rod has been completely cut into segments, so the function returns 0.
//    - If `n` becomes negative, it means the rod can't be cut further, so the function returns `INT_MIN` (which indicates an invalid value).

// 3. **Recursive Cases**:
//    - The function considers three possible ways to cut the rod into segments of lengths `x`, `y`, and `z`.
//    - For each possibility, it recursively calls the `solve` function with the updated rod length after making the cut (`n - x`, `n - y`, `n - z`).
//    - It adds 1 to the result of each recursive call to account for the current cut.
//    - It then selects the maximum among these three possibilities (`ans1`, `ans2`, `ans3`) as the final result.

// 4. **Function `main`**:
//    - In the `main` function, specific values are assigned to variables `n`, `x`, `y`, and `z`.
//    - It calls the `solve` function with these values and stores the result in `ans`.
//    - If the result `ans` is negative (which means an invalid result), it sets `ans` to 0.
//    - Finally, it prints the value of `ans`.

// 5. **Example**:
//    - If `n = 7`, `x = 5`, `y = 2`, and `z = 2`, the program will calculate the maximum number of segments that can be obtained by cutting a rod of length 7 using segments of lengths 5, 2, and 2.

// Please note that while this code provides a solution, it's a naive recursive approach which might not be efficient for large inputs due to repeated computation of overlapping subproblems. Dynamic programming or memoization techniques could be used to optimize the solution in such cases.
