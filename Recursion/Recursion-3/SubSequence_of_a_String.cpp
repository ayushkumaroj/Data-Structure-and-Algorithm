#include<iostream>
using namespace std;

void printSubsequences(string str, string output, int i){
  //base case
  if(i>=str.length()){
    cout<< output <<endl;
    return;
  }

  //exclude
  printSubsequences(str,output,i+1);

  //include
  output = output+str[i]; //This line is reesponsible for concatenation of output string
  //ith character of str string

  printSubsequences(str, output, i+1);
}


int main(){
  string str = "abc";
  string output = " ";
  int i=0;

  printSubsequences(str,output,i);
  return 0;
}






//Q -> IF YOU HAVE TO STORE THE ANSWER

// #include<iostream>
// using namespace std;
// #include<vector>

// void printSubsequences(string str, string output, int i, vector<string>&v){
//   //base case
//   if(i>=str.length()){
//      //store
//      v.push_back(output);
//      return;
//   }

//   //exclude
//   printSubsequences(str,output,i+1,v);

//   //include
//   output = output+str[i]; //This line is reesponsible for concatenation of output string
//   //ith character of str string

//   printSubsequences(str, output, i+1,v);
// }


// int main(){
//   string str = "abc";
//   string output = " ";
//   vector<string>v;
//   int i=0;

//   printSubsequences(str,output,i,v);

//   cout<<"Printing all subsequences: "<<endl;
//   for(auto val: v){
//     cout<<val<<" ";
//   }

//   cout<<endl<<"Size of vector is: "<<v.size()<<endl;
//   return 0;
// }