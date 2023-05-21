#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7


const int _Max = 1e6 + 1;
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}


bool check(string s){
    for (int i=0 ;i < s.size() ; i++){
        if((i % 2 == 0 && s[i] % 2 == 0 ) || (i % 2 == 1 && s[i] % 2 == 1)) return false;
    }
    return true;
}

void bublesort(int a[] , int n){
    for (int i =0  ;i < n ;i++){
        for (int j=i + 1; j < n ; j++){
            if(a[i] > a[j]){
                swap(a[i] , a[j]);
            }
        }
        /*cout << "cac buoc la : " << i +1 << ":";
        for (int i =0 ; i < n ; i++){
            cout << a[i] << " ";
        }
        cout << endl;*/
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for (auto &X : a){
        cin >> X;
    }
    bublesort(a ,n);
}
