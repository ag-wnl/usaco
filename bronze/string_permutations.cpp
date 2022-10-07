#include <bits/stdc++.h>
using namespace std;
 
#define ff first
#define ss second
#define ll long long
#define zerobits(x) __builtin_ctzll(x)
#define setbits(x) __builtin_popcountll(x)
#define invectr(x)     \
    for (auto &i : x) \
        cin >> i;
const int MAXN = 200200;

//https://cses.fi/problemset/task/1622
//generating permutations for a given string
 
int main(){
    string s;
    cin >> s;
    int n = s.size();
    sort(s.begin(), s.end());
    vector<string> v;
    do{
    	v.push_back(s);
    }while(next_permutation(s.begin(), s.end()));
    for(auto it : v){
    	cout << it << "\n";
    }       
    return 0;
}

//haze_12
