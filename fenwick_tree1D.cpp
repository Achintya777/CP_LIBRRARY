struct ft{
  ll a[mxN+1] ;
  void upd(int i,int x){
    for(++i;i<=n;i+=i&-i)
      a[i]+=x  ;
  }
  ll qry(int i){
    ll r=0 ;
    for(;i;i-=i&-i)
      r+=a[i] ;
    return r ;
  }
  void reset(){
    mems(a,0) ;
  }
} ;
