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
    stack<string> v;
    for (int i = s.size() -1 ; i >= 0 ; i--){
        if (isalpha(s[i])){
            string temp;
            temp += s[i];
            v.push(temp);
        } else {
            string tm1 = v.top();
            v.pop();
            string tm2 = v.top();
            v.pop();
            string temp = tm1 + tm2 + s[i];
            v.push(temp);
        }
    }
    cout << v.top() << endl;
    return 0;
}
