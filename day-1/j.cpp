#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n;
  cin>>t;
  while(t>0){
    t--;
    cin>>n;
    int a = -1, b = -1, c = -1, done = 0;
    for(int i= 2; i<=sqrt(n); i++){
      if(n%i==0){
          // i is not prime
          for(int j=2; j<= sqrt(i); j++){
            if(i%j==0 && i/j != i){
              a = n/i; b = j; c = i/j;
              if(a!=b && a!=c && b!=c){
                done = 1;
                break;
              }
            }
          }
          if(done){
            break;
          }
        if(i!= n/i){
          for(int j=2; j<= sqrt(n/i); j++){
            if((n/i)%j==0 && (n/i)/j != i){
              a = i; b = j; c = (n/i)/j;
              if(a!=b && a!=c && b!=c){
                done = 1;
                break;
              }
            }
          }
          if(done){
            break;
          }
        }
      }
    }
    if(done){
      cout<<"YES"<<endl;
      cout<<a<<' '<<b<<' '<<c<<'\n';
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}