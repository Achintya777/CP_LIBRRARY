#include <bits/stdc++.h>
using namespace std ;
const int mxN =1e5+1;
int n,a[mxN],st[mxN][18] ;
signed main(){
  cin >>n ;
  for(int i=0;i<n;i++)
    cin >> a[i] ;
  for(int i=0;i<n;i++)
    st[i][0]=a[i] ;
  for(int j=1;j<18;j++)
    for(int i=0;i+(1<<j)<=n;i++)
      st[i][j]=min(st[i][j-1],st[i+(1<<j-1)][j-1]) ;
  int q ;cin >> q ;
  while(q--){
    int l,r ;
    cin>> l >> r ;
    int ans=1e9 ;
    // logn queries
    // for(int i=17;~i;--i)
    //   if(l+(1<<i)<=r+1)
    //     ans=min(ans,st[l][i]),l+=(1<<i) ;
    
    int j =__lg(r-l+1) ;
    ans=min(st[l][j],st[r-(1<<j)+1][j]) ;
    cout << ans << '\n'  ;
  }
}
