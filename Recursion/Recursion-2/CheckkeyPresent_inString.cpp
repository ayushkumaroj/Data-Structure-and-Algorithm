// #include<iostream>
// using namespace std;

// int checkKey(string str, int i, int n, char key){
//   //base case
//   if(i>=n){
//     //key is not found
//     return false;
//   }

//   //1 case solve kardo
//   if(str[i] == key){
//     return true;
//   }

//   int ans  = checkKey(str, i+1, n, key);
//   return ans;
// }

// int main(){
//   string str = "ayushkumar";
//   int n = str.length();
//   char key = 'x';
//   int i=0;

//   int ans = checkKey(str,i,n,key);
//   cout<<"Answer is: "<< ans << endl;

//   return 0;
// }




//CODE TO RETURN EXACT INDEX OF A STRING

// #include<iostream>
// using namespace std;
// int checkKey(string str, int i, int n, char key){
//   //base case
//   if(i>=n){
//     //key is not found
//     return -1;
//   }

//   //1 case solve kardo
//   if(str[i] == key){
//     return i;
//   }

//   int ans  = checkKey(str, i+1, n, key);
//   return ans;
// }

// int main(){
//   string str = "ayushkumar";
//   int n = str.length();
//   char key = 'u';
//   int i=0;

//   int ans = checkKey(str,i,n,key);
//   cout<<"Answer is: "<< ans << endl;

//   return 0;
// }




//Q-> Return index of each string which are present in double
// #include<iostream>
// using namespace std;
// void checkKey(string str, int i, int n, char key){
//   //base case
//   if(i>=n){
//     //key is not found
//     return;
//   }

//   //1 case solve kardo
//   if(str[i] == key){
//      cout<<"Found at: "<< i <<endl;
//   }
  
//   //baki recursion sambhal lega
//   return checkKey(str, i+1, n, key); 
// }

// int main(){
//   string str = "ayushakumar";
//   int n = str.length();
//   char key = 'a';
//   int i=0;

//   checkKey(str,i,n,key);


//   return 0;
// }




//Q3->Store ans in vector
// #include<iostream>
// #include<vector>
// using namespace std;

// void checkKey(string& str, int i, int n, char key, vector<int>& ans){
//     //base case
//     if(i >= n){
//         //key is not found
//         return;
//     }

//     //1 case solve kardo
//     if(str[i] == key){
//         //store in vector
//         ans.push_back(i);
//     }

//     //baki recursion sambhal lega
//     checkKey(str, i + 1, n, key, ans);
// }

// int main(){
//     string str = "ayushakumar";
//     int n = str.length();
//     char key = 'a';
//     int i = 0;

//     vector<int> ans;

//     checkKey(str, i, n, key, ans);

//     cout << "Printing ans: " << endl;
//     for(auto val: ans){
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }



//Q4-> Count Number of variable
// #include<iostream>
// #include<vector>
// using namespace std;

// void checkKey(string& str, int i, int n, char key, int& count){
//     //base case
//     if(i >= n){
//         //key is not found
//         return;
//     }

//     //1 case solve kardo
//     if(str[i] == key){
//       count++;
    
//     }

//     //baki recursion sambhal lega
//     checkKey(str, i + 1, n, key, count);
// }

// int main(){
//     string str = "ayushakumar";
//     int n = str.length();
//     char key = 'a';
//     int i = 0;

//     int count = 0;

//     checkKey(str, i, n, key, count);
//     cout<<count<<endl;
//     return 0;
// }