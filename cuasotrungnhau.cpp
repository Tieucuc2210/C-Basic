#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}



bool solve(){
	int n ,k; cin >> n >> k;
	int a[n];
	for (int i=0;i <n ;i++){
		cin >> a[i];
	}
	bool ok = false;
	set<int> v;
	for (int i=0;i < k ;i++){
		if(v.count(a[i])){
			return true;
		}
		v.insert(a[i]);
	}
	for (int i = k ;i < n ;i++){
		v.erase(a[i-k]);
		if(v.count(a[i])) return true;
		v.insert(a[i]);
	}
	return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(solve()) cout << "YES";
    else cout << "NO";
}