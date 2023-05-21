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
    stack<int> v;
    for (int i =1;i <= t; i++){
    	string x; cin >> x;
    	if (x == "push"){
    		int x; cin >> x;
    		v.push(x);
    	} else if(x == "top"){
    	    if (v.empty() == true){
    	       cout << "NONE";	
    	    } else{
    	    	cout << v.top() << endl;
    	    	v.pop();
    	    }
    	} 

    }
}