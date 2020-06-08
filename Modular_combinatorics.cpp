ll iv[mxN],fact_inv[mxN],fact[mxN];
void modular_inv(){
  iv[1]=1 ;
  for(int i=2;i<mxN;i++)
    iv[i]=M-M/i*iv[M%i]%M ;
}
void factorial_inv(){
  fact_inv[1]=fact_inv[0]=1 ;
  for(int i=2;i<mxN;i++)
    fact_inv[i]=fact_inv[i-1]*iv[i]%M ;
}
void factorial(){
  fact[0]=fact[1]=1 ;
  for(int i=2;i<mxN;i++)  
    fact[i]=fact[i-1]*i%M ;
}
ll C(ll n,ll r){
	if(n<0 || r<0 || n<r)return 0 ;
	return fact[n]*fact_inv[r]%M*fact_inv[n-r]%M ;
}
ll pM(ll b,ll p){
	ll r=1 ;
	for(;p;b=(b*b)%M,p/=2)if(p&1)r=(r*b)%M ;
	return r ;
}
modular_inv() ;
factorial_inv() ;
factorial() ;
