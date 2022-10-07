#include<bits/stdc++.h>
 
using namespace std;
 
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

//http://www.usaco.org/index.php?page=viewproblem2&cpid=666


int main(){
    
    int n,q;
    cin >> n >> q;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < q; i++)
    {
        int a,b;
        cin >> a >> b;
        cout << upper_bound(begin(v), end(v), b) - lower_bound(begin(v), end(v), a) << "\n";
        
    }

    //the upper bound - lower bound works
    //as the res of substraction of iterators is
    //equal to no. of haybales inclusive of them
    //as in our vector we only have haybale positions
}
//haze_12

