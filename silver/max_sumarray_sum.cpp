#include<bits/stdc++.h>
 
using namespace std;

//https://cses.fi/problemset/task/1643

#define ff first
#define ss second
#define ll long long
#define zerobits(x) __builtin_ctzll(x)
#define setbits(x) __builtin_popcountll(x)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define vi vector<int>
#define invectr(x)     \
    for (auto &i : x) \
        cin >> i;
const int MAXN = 200200;

int main(){
    int n;
    cin >> n;
    std::vector<int> pref(n+1,0);
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        pref[i+1] = pref[i] + x;
    }
    int maxi = pref[1];  //initial max element
    int mini = pref[0];  //initial mini element
    for(int i=1; i<=n; i++){
        maxi = max(maxi, pref[i] - mini);
        mini = min(mini, pref[i]);
    }
    cout << maxi << "\n";
}
//haze_12

