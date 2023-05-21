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



bool check(string s)
{
    stack<char>st;
    for(char x : s)
    {
        if(st.empty())
        {
            st.push(x);
        }
        else if(x == ')')
        {
            if(st.top() == '(') 
            {
                st.pop();
            }
            else return false;
        }
        else if(x == ']')
        {
            if(st.top() == '[') 
            {
                st.pop();
            }
            else return false;
        }
        else if(x == '}')
        {
            if(st.top() == '{') 
            {
                st.pop();
            }
            else return false;
        }
        else st.push(x);
    }
    return st.size() == 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    if (check(s)) cout << "YES";
    else cout << "No";
}