#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v) memset(v,0,sizeof(v))

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

void solve() {
	int n,a;
	cin>>n;
	int even(0),odd(0);
	int n1,n2;
	int i = 1;
	while(n--){
		cin>>a;
		if(a&1) odd++,n1 = i;
		else even++,n2=i;
		i++;
	}
	if(even > odd) cout<<n1;
	else cout<<n2;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifdef HIEUNGUYEN
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    solve();
}




