#include<bits/stdc++.h>
 
using namespace std;

//https://cses.fi/problemset/task/1652
//this problem was fun

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


//http://www.usaco.org/index.php?page=viewproblem2&cpid=919

int pref[1000+1][1000+1];

int main(){
    int n, k;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        //setting up with corners of the rectangle
        pref[x1][y1]++;
        pref[x1][y2]--;
        pref[x2][y1]--;
        pref[x2][y2]++; 
        
    }

    //calculating prefix sum 2D
    int res=0;
    for(int i=0; i<1000; i++){
        for(int j=0; j<1000; j++){
            if(i) pref[i][j] += pref[i-1][j];
            if(j) pref[i][j] += pref[i][j-1];
            if(i&&j) pref[i][j] -= pref[i-1][j-1];
            if(pref[i][j]==k) res++;
        }
    }
    cout << res << "\n";  

}
//haze_12

