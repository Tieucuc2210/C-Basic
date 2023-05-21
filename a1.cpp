// #include<bits/stdc++.h>


// using namespace std;
// using ll = long long;
// using db = double;
// #define MAX_SIZE 1e7
// #define MIN_SIZE -1e7


// const int _Max = 1e6 + 1;
// const int MOD = (int) 1e9+7;
// const int INF = (int) 1e9+1;
// inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
// inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}



// int main(){

//     int n; cin >> n;
//     int a[n];
//     for(int &x : a) cin >> x;
//     int i = -1, pivot = a[n-1];
//     for(int j = 0; j < n - 1; j++){
//         //Neu tim thay phan tu <= pivot
//         //Dich i sang phai va hoan vi no voi a[j]
//         //Khi dich i sang phai, ta se duoc so > pivot ma truoc do
//         // da bo qua no
//         if(a[j] <= pivot){
//             ++i;
//             swap(a[i], a[j]);
//         }
//     }
//     ++i;
//     swap(a[i], a[n - 1]);
//     for(int j = 0; j < n; j++){
//         if(i == j) cout << "[" << a[j] << "] ";
//         else cout << a[j] << " ";
//     }
//     return 0;
// }




// thap ha noi :


import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        Map<String, Integer> nonDecreasingNumbers = new HashMap<>();
        
        while (scanner.hasNextLine()) {
            String line = scanner.nextLine().trim();
            if (line.isEmpty()) {
                continue;
            }
            
            String[] numbers = line.split("\\s+");
            for (String num : numbers) {
                if (isNonDecreasing(num)) {
                    nonDecreasingNumbers.put(num, nonDecreasingNumbers.getOrDefault(num, 0) + 1);
                }
            }
        }
        
        List<Map.Entry<String, Integer>> list = new ArrayList<>(nonDecreasingNumbers.entrySet());
        Collections.sort(list, new Comparator<Map.Entry<String, Integer>>() {
            
            public int compare(Map.Entry<String, Integer> o1, Map.Entry<String, Integer> o2) {
                int cmp = Integer.compare(o2.getValue(), o1.getValue());
                return (cmp == 0) ? o1.getKey().compareTo(o2.getKey()) : cmp;
            }
        });
        
        for (Map.Entry<String, Integer> entry : list) {
            System.out.println(entry.getKey() + " " + entry.getValue());
        }
    }
    
    // Kiểm tra số có tạo thành dãy không giảm hay không
    public static boolean isNonDecreasing(String num) {
        for (int i = 1; i < num.length(); i++) {
            if (num.charAt(i) < num.charAt(i - 1)) {
                return false;
            }
        }
        return true;
    }
}
