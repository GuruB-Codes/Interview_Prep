#include <bits/stdc++.h>
using namespace std;
int main() {
   string s1; cin>>s1;
   string s2; cin>>s2;
  unordered_map<char,int>freq;
   for( char c : s1){
    freq[c]++;
   }
   for(char c : s2){
    freq[c]--;
   }
   for(auto x : freq){
    if(x.second!=0){
        cout<<"Not Anagram";
        return 0;
    }
   }cout<<"Anagram";

    return 0;
}