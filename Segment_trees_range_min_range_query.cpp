int n ;
ll st[4*mxN]={}, lz[4*mxN]={};
void app(int i,ll x){
  st[i]+=x;
  lz[i]+=x;
}
void psh(int i){
  app(2*i,lz[i]);
  app(2*i+1,lz[i]);
  lz[i]=0 ;
}
void upd(int l1,int r1,ll x,int i=1,int l2=0,int r2=n){
  if(l1<=l2 && r1>=r2){
    app(i,x);
    return ;
  }
  int m2=(l2+r2)/2 ;
  psh(i);
  if(l1<=m2)
    upd(l1,r1,x,2*i,l2,m2);
  if(r1>m2)
    upd(l1,r1,x,2*i+1,m2+1,r2);
  st[i]=min(st[2*i],st[2*i+1]) ;
}
ll qry(int l1,int r1,int i=1,int l2=0,int r2=n){
  if(l1<=l2 && r1>=r2)
    return st[i] ;
  int m2 =(l2+r2)/2;
  psh(i) ;
  return min(l1<=m2?qry(l1,r1,2*i,l2,m2):1e18,m2<r1? qry(l1,r1,2*i+1,m2+1,r2):1e18) ;
}
