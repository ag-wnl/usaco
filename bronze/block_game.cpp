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

 
int main(){
    int n;
    string s1,s2;
    cin >> n;
    int cnt[26] = {};
    for(int i = 0; i < n; i++){
    	int cnt1[26] = {};
		int cnt2[26] = {};
    	cin >> s1 >> s2;
    	for(int j = 0; j < s1.size(); j++){
    		cnt1[s1.at(j) - 97]++;
    	}
    	for(int j = 0; j < s1.size(); j++){
    		cnt2[s2.at(j) - 97]++;
    	}
    	for(int j = 0; j < 26; j++){
    		cnt[j] += max(cnt1[j], cnt2[j]);
    	}

    }
    for(int i = 0; i < 26; i++){
    	cout << cnt[i] << "\n";
    }
    return 0;
}

//haze_12
