#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin >>n;
   int a; cin>>a;
   int b; cin>>b;
   for(int i=0;i<n;i++){
    cout<<a<<" ";
    int next=a+b;
    a=b;
    b=next;
   }return 0;
}