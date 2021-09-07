#include<iostream>
#include<algorithm>
 using namespace std;
 typedef long long ll;
 int main()
 {
     ll n,m;
     cin>>n>>m;
     if(n>2*m) cout<<(n+m-1)/m*5;
    else cout<<10;
  } 
