//struct implementation 
struct dsu{
  int n ;
  vector<int>p,s ;
  dsu(int _n):n(_n){
    p.resize(n) ;
    s.assign(n,1) ;
    iota(p.begin(),p.end(),0) ;
  }
  int find(int x){
    return (x==p[x]?x:p[x]=fs(p[x])) ;
  }
  bool join(int x,int y){
    if((x=find(x))==(y=find(y)))
      return 0  ;
    if(s[y]>s[x])
      swap(x,y) ;
    p[b]=a ;
    s[a]+=s[b] ;
    return 1 ;
  }
};
// basic DSU implemntation 
int parent[mxN] ;
int size[mxN] ;
void make_set(int v){
  parent[v]=v ;size[v]=1 ;
  return  ;
}
int find_set(int v){
  if(parent[v]==v)return v ;
  return parent[v]=find_set(parent[v]) ;
}
void union_sets(int a,int b){
  a = find_set(a) ;
  b = find_set(b) ;
  if(a==b)return ;
  if(size[a]<size[b])
    swap(a,b) ;
  parent[b]=a ;
  size[a]+=size[b]  ;
}
// shorter implementation
int p[mxN],s[mxN];
void ms(int v){
  p[v]=v;s[v]=1 ;
}
int fs(int v){
  if(p[v]==v)
    return v ;
  return p[v]=fs(p[v]) ;
}
void uni(int a,int b){
  a=fs(a) ;b=fs(b) ;
  if(a==b)
    return ;
  if(s[b]>s[a])
    swap(a,b);
  p[b]=a ;s[a]+=s[b];
}
