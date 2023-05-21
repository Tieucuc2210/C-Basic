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


int tong(int n){
	int sum =0;
	while(n != 0){
		sum += n % 10;
		n /= 10;
	}
	if(sum == 9) return 1;
	else {
		while(sum >= 10){
			int res = sum;
			sum =0; // reset sum ve 0;
			while(res > 0){
				sum += n % 10;
				res /= 10;
			}
			if(sum == 9) return 1;
			else return 0;
		}
	}
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	if (tong(n)) cout << "1" << endl;
    	else cout << "0" << endl;
    }
}