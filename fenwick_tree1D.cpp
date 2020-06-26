struct ft{
  ll a[mxN]={};
  void upd(int i,ll x){
    for(;i<=mxN;i+=i&-i)
      a[i]+=x ;
  }
  void upd1(int l,int r,ll x ){
    upd(l,x);upd(r+1,-x) ;
  }
  ll qry(int i){
    ll r=0 ;
    for(;i;i-=i&-i)
      r+=a[i] ;
    return r ;
  }
}f[2] ;
