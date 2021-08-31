// drill this in your head: updates are zero indexed and queries are also zero indexed
struct ft{
  int n  ; 
  vector<int>a ;
  ft(int _n):n(_n){
    a.assign(n+1,0) ;
  }
  void upd(int i,int x){
    for(++i;i<=n;i+=i&-i)
      a[i]+=x;
  }
  void upd1(int l,int r,int x ){
    upd(l,x);upd(r+1,-x) ;
  }
  int qry(int i){
    int r=0 ;
    for(++i;i;i-=i&-i)
      r+=a[i] ;
    return r ;
  }
  int qry1(int l,int r){
    return qry(r)-qry(l-1);
  }
} ;

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
