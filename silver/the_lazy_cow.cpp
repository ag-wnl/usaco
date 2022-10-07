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

//http://www.usaco.org/index.php?page=viewproblem2&cpid=416
//Official analysis
//http://www.usaco.org/current/data/sol_lazy_silver.html

//caus after rotating 45 degrees the size of grid doubles
int grid[800+1][800+1];

//gotta rotate the matrix to 45 degree
int main(){
    int n, k, best;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            //45 degree rotated value input
            cin >> grid[i+j][n-i+j-1];
        }
    }
    int t = (n+1)%2; //t is used so we dont count non lattice points(the 0 points which developed when we titled grid by 45 degrees)
    n = n*2-1; //caus now the grid is of double size
    //so we gotta update n too

    for(int i=0; i<n; i++, t=1-t){
        
        // calculate the sum of 2k x 2k region
        // Bessie can only be positioned in lattice points
        int tot = 0;
        for(int a=max(i-k,0); a<n && a<=i+k; a++){
            for(int b=max(t-k,0); b<n && b<=t+k; b++){
                tot+=grid[a][b];
            } 
        }
        
        if(best<tot){
            best = tot;
        }

        //sliding the region 
        for(int j=t+1; j+k<n; j++){
            for(int a= max(i-k,0); a<n && a<=i+k; a++){
                if(j-k-1>=0) tot-=grid[a][j-k-1];
                tot+=grid[a][j+k];
            }
            //only update for lattice points
            if(j&2==t && best<tot) best = tot;
        }

    }
    cout << best << "\n";
}
//haze_12

