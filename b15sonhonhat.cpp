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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s ,n; cin >> s >> n;
    if (s > n * 9) cout << "-1";
    else{
    	s -= 1;
    	string res = "";
    	for (int i =1 ;i <= n -1; i++){
    		if (s >= 9){
    			res += "9";
    			s -= 9;
    		} else{
    			res = to_string(s) + res;
    			s = 0;
    		}
    	}
    	s++;
    	res = to_string(s) + res;
    	cout << res;
    }
}