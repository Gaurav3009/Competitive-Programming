
#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked

// Loop
#define fo(i,n) for(i = 0;i<n;i++)
#define FB(i,s,n) for(i = s;s<n?i<n:i>n;s<n?i+=1:i-=1)

// Variables
#define ii int
#define ll long long
#define lld long long double

// Input
#define sci(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define scs(n) scanf("%s",&n)

// Output
#define pri(n) printf("%d",n)
#define prl(n) printf("%lld",n)
#define prs(n) printf("%s",n)

// data structures
typedef pair<ii,ii> pii;
typedef pair<ll,ll> pll;
typedef vector<ii> vii;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vii> vvii;
typedef vector<vll> vvll;
typedef map<ii,ii> mii;
typedef map<ll,ll> mll;

// Data Structure operation
#define pb push_back
#define mp make_pair
#define Fi first
#define Sc second
#define sel(d) d.begin(),d.end()
#define sortit(d) sort(all(d))
#define itr(it,d) for(auto it=d.begin();it !=d.end();it++)

// Debugging
#define deb(n) cout<<#n<<"="<<n<<endl
#define deb1(a,b) cout<<#a<<"="<<a<<#b<<"=">>b<<endl

// Mod
const int mod = 1000000007;
const int N = 3e5, M=N;

// Important functions
int modpow(int b,int e); 

// loop variables 
int i, j, n, m;

// Main Logic
void solve() {
    pri(1);
}

int main() {
    ii t;
    sci(t);
    fo(i,t) {
        solve();
    }
}

int modpow(int b,int e) {
  b %= mod;
  ii res = 1;
  while (e>0) {
    if (e & 1) res = ((ll)res * b) % mod;
    b = ((ll)b * b) % mod;
    e >>= 1;
  }
  return res;
}

