#include<bits/stdc++.h>
 
using namespace std;

//http://www.usaco.org/index.php?page=viewproblem2&cpid=572
 
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
    int maxi = 0;
    std::vector<int> res(7+1,-1); //stores % results
    res[0] = 0;

    int rem = 0; //the current remainder
    for(int i=1; i<=n; i++){
        int c;
        cin >> c;
        rem = (rem + c) % 7;
        if(res[rem] == -1){
            res[rem] = i;  //if 1st encounter
        }
        else{
            maxi = max(maxi, i - res[rem]); 
        }
    }
    cout << maxi << "\n";
}
//haze_12