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

//https://codeforces.com/problemset/problem/701/C

//minimize size -> all pokemon types
int main(){

	int flat_num;
	std::cin >> flat_num;
	vector<char> flats(flat_num);
	std::unordered_set<char> types;
	
	for (char& p : flats) {
		std::cin >> p;
		types.insert(p);
	}

	int shortest_interval = INT32_MAX;
	std::unordered_map<char, int> curr_pokemon;
	int closest_left = 0;
	for (int right = 0; right < flat_num; right++) {
		curr_pokemon[flats[right]]++;
		
		while (closest_left + 1 <= right && curr_pokemon[flats[closest_left]] > 1) {
			curr_pokemon[flats[closest_left]]--;
			closest_left++;
		}
		
		if (curr_pokemon.size() == types.size()) {
			shortest_interval = std::min(shortest_interval, right - closest_left + 1);
		}
	}
	cout << shortest_interval << endl;
}	
//haze_12

