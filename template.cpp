#include <bits/stdc++.h>
using namespace std;
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define forr(a,b,c) for(int a=b;a<c;a++)
#define forrev(a,b,c) for(int a=b;a>c;a--)
#define all(v) v.begin(),v.end()
#define revall(v) v.rbegin(),v.rend()
#define allk(v,k) v.begin()+k,v.end()
#define revallk(v,k) v.rbegin()+k,v.rend()
#define allkj(v,k,j) v.begin()+k,v.end()-j
#define revallkj(v,k,j) v.rbegin()+j,v.rend()-k
#define ff first
#define ss second
#define init inity
////////////////////////// non-modifiable /////////////////////////////////

#define mod 1000000007
#define eps 1e-9
#define inf INT_MAX
#define infl LONG_LONG_MAX
ll power(ll a,ll n)
{
	if(a==0)return 0;
	if(a==1 || n==0)return 1;
	if(n==1)return a%mod;//can remove mod?
	ll t=power(a,n/2);
	t=t*t%mod;
	if(n&1)return t*a%mod;
	return t;
}
#define P (int)(2e6)+9
#define FACTORIZE 1
#define DETERMINE 2
/*int primes[P];
void sieve(int prime=2)//2->detects prime, 1->max prime in factorization
{
	forr(i,2,P-3)
	{
		if(!primes[i])
		for(int j=prime*i;j<P-3;j+=i)primes[j]=i;
	}
	//forr(i,1,21)cout<<primes[i]<<" ";cout<<endl;
	if(prime==2)
	{
		forr(i,1,P-3)
		{
			primes[i] = ( primes[i] == 0 );
		}
	}
	else
		primes[1] = 1;
}*/
int popcount(ll a)
{
	int c=0;
	while(a)
	{
		c++;
		a-=a&-a;
	}
	return c;
}
void factorize(int a)
{
	
}
void update(int tree[],int idx,int val,int maxval)
{
	for(;idx<=maxval;idx+=idx&-idx)
	{
		tree[idx]+=val;
		//tree[idx]%=mod;
	}
}
int read(int tree[],int idx)
{
	ll sum=0;
	for(;idx>0;idx-=idx&-idx)
	{
		sum+=tree[idx];
		//sum%=mod;
	}
	return sum;
}
////////////////////////// MODIFIABLE /////////////////////////////////////

struct node2
{
	int id,val;
	node2()
	{
		static int ctx=0;
		id=ctx++;
	};
	node2(int a,int b=0,int c=0,int d=0,int e=0,int f=0)
	{
		val=a;
	}
};
struct comp2
{
	bool operator()(int a,int b)
	{
		//return a<b;
		return b<a;	//min heap	
	}
};
bool cmp2(int a,int b)
{
	//return a<b;
	return b<a;
}

struct node
{
	int id,val;
	node()
	{
		static int ctx=0;
		id=ctx++;
	};
	node(int a,int b=0,int c=0,int d=0,int e=0,int f=0)
	{
		val=a;
	}
};
struct comp
{
	bool operator()(int a,int b)
	{
		//return a<b;
		return b<a;	//min heap	
	}
};
bool cmp(int a,int b)
{
	//return a<b;
	return b<a;
}

////////////////////////// custom-defined /////////////////////////////////
#define N 100009
#define L 1 << 20
int n,m,a,b,c,d,edge,k,h,w,x,y,p,q,t,ans,res,ma,mi,T,act=0,pas=1,cur,flag,now;
int dp, dp2, cnt;
char s[1];
//vector<string> s;
double e,f,z;
vector<int> v, vec;
set<int> sett;
typedef map<int,int> Mapp;
Mapp mapp;
////////////////////////// variable declarations //////////////////////////

void print()//for detailed output of [a data structure]
{
	
}
void print2()//for detailed output of [a data structure]
{
	
}
void input()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
}
void init()
{
	
}
void solve()
{
	
}
void output()
{
	
}
///////////////////////////// my functions ////////////////////////////////

int main() 
{
	input();
	solve();
	output();
	return 0;
}
//// MAIN //// MAIN //// MAIN //// MAIN //// MAIN //// MAIN //// MAIN ////