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
    string s; cin >> s;
    int ans =0;
    stack<char> v;
    for (int i =0 ;i < s.size() ;i++){
    	if (v.empty()){
    		v.push(s[i]);
    	} else if(s[i] == ')' && v.top() == '('){
    		ans += 2;
    		v.pop();
    	} else{
    		v.push(s[i]);
    	}
    }
    cout << s.size() - ans;
}