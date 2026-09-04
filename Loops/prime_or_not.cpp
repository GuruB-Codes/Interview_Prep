#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
  bool prime=true;
  if(n<2){
    prime=false;
  }
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
        prime=false;
        break;
    }
  }if(prime){
    cout<<"prime";
  }else{
    cout<<"Not Prime";
  }

    return 0;
}