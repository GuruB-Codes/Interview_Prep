#include <bits/stdc++.h>
using namespace std;
int main() {
   string s; getline(cin,s);
  unordered_map<char,int>freq;
   for( char c : s){
    freq[c]++;
   }
   for(auto x : freq){
    if(x.first==' '){
        cout<<"' ' : "<<x.second<< endl;
    }else{
        cout<<x.first<<" : "<<x.second<< endl;
    }
   }

    return 0;
}