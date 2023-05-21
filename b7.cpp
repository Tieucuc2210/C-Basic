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


bool check(char s){
	return s == '+' || s == '-' || s== '*' || s =='/';
}

bool check2(string s){
	stack<char> v;
	for (int i= 0 ;i < s.size() ; i++){
		if (s[i] != ')'){
			v.push(s[i]);
		} else{
			bool ok = true;
			while(v.top() == '('){
				if (check(v.top())) ok = false;
				v.pop();
			}
			if(ok) return true;
			v.pop();
		}
	}
	return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    if (check2(s)) cout << "yes";
    else cout << "No";
}