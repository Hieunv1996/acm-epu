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
	int a,ans,b,du = 1;
	cin>>a>>b;
	ans = a/b;
	a %= b;
	int d[1000],u = 0,save = 0;
	bool iTrue = 0;
	map<int,int> m;
	while(a != 0){
		a *= 10;
		du = a/b;
		a %= b;
		if(m[du] == 0) d[u++] = du;
		if(m[du] == 1){
			save = du;
			iTrue = 1;
			break;
		}
		m[du] = 1;
	}
	if(u == 0) cout<<ans<<".0"<<endl;
	else if(u > 0 && !iTrue){
		cout<<ans<<".";
		_for(i,0,u) cout<<d[i];
		cout<<endl;
	}else if(u > 0 && iTrue){
		cout<<ans<<".";
		int i = 0;
		while(d[i] != save){
			cout<<d[i];
			i++;
		}
		cout<<"(";
		_for(j,i,u) cout<<d[j];
		cout<<")\n";
	}
}

int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--)
	    solve();
}


