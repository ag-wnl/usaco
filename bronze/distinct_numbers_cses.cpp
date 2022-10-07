#include <bits/stdc++.h>
using namespace std;
 
#define ff first
#define ss second
#define ll long long
#define zerobits(x) __builtin_ctzll(x)
#define setbits(x) __builtin_popcountll(x)
#define all(x) (x).begin(), (x).end()
#define invectr(x)     \
    for (auto &i : x) \
        cin >> i;
const int MAXN = 200200;

 
int main(){
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << "\n";
    return 0;
}

//haze_12
