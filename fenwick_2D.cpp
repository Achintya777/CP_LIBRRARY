int ft[mxN][mxN];
void upd(int i2,int j2,ll x){
  for(int i=i2+1 ;i<=n;i+=i&-i)
    for(int j=j2+1;j<=n;j+=j&-j)
      ft[i][j]+=x ;
}
ll qry(int i2,int j2){
  ll r=0 ;
  for(int i=i2;i;i-=i&-i)
    for(int j= j2;j;j-=j&-j)
      r+=ft[i][j];
  return r ;
}
//query any prefix rectangle by this inclusion exclusion formula qry(y2,x2)-qry(y1-1,x2)-qry(y2,x1-1)+qry(y1-1,x1-1)
