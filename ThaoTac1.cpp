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
    int t; cin >> t;
    stack<int> p;
    for (int i =1;i <= t ;i++){
    	string s; cin >> s;
    	if (s == "show"){
    		vector<int> res;
    		while(!p.empty()){
    			res.push_back(p.top());
    			p.pop();
    		}
    		reverse(begin(res) , end(res));
    		for (auto x : res){
    			cout << x << " ";
    			p.push(x);
    		}
    		if (res.size() == 0) cout << "empty";
    		cout << endl;
    	} else if(s == "push"){
    		int x; cin >> x;
    		p.push(x);
    	} else{
    		if (!p.empty()) p.pop();
    	}
    }
}