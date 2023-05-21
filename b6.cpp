
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


int main()
{
    string s ; cin >> s;
    int k ; cin >> k;
    stack<char>st;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(st.empty()) st.push(s[i]);
        else if(s[i] != st.top() || st.size() + 1 < k)
        {
            st.push(s[i]);
        }
        else
        {
            int ans = 0;
            for(int j = 0 ; j < k - 1 ; j++)
            {
                if(s[i] == st.top()) 
                {
                    st.pop();
                    ++ans;
                }
                else break;
            }
            if(ans < k - 1)
            {
                for(int j = 0 ; j < ans + 1 ; j++)
                {
                    st.push(s[i]);
                }
            }
        }
    }
    string res = "";
    while(!st.empty())
    {
        res += st.top();
        st.pop();
    }
    if(res == "") 
    {
        cout << "EMPTY";
        return 0;
    }
    reverse(res.begin() , res.end());
    cout << res;
    return 0;
}