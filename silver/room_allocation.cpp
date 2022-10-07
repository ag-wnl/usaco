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
const int MAXN = 2e5;


//https://cses.fi/problemset/task/1164

int ans[MAXN];

int main(){
	
	int n;
	cin >> n;
	std::vector<pair<pair<int, int>, int>> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i].first.first >> v[i].first.second;
		v[i].second = i;
	}

	sort(all(v));

	int roomcnt = 0, lastroom = 0;
	priority_queue<pair<int,int>> pq;
	//making this minimum priority queue or negative heap
	for (int i = 0; i < n; ++i)
	{
		if(pq.empty()){
			lastroom++; 
			pq.push(make_pair(-v[i].first.second, lastroom));
			ans[v[i].second] = lastroom;
		}
		else{
			pair<int,int> mini = pq.top();
			if(-mini.first < v[i].first.first){  //departure time early than next guest arrival so can be same room
				
				pq.pop();
				pq.push(make_pair(-v[i].first.second, mini.second));
				ans[v[i].second] = mini.second;
			}
			else{
				
				lastroom++; //no vacant room
				pq.push(make_pair(-v[i].first.second, lastroom));
				ans[v[i].second] = lastroom;
			}
		}

		roomcnt = max(roomcnt, int(pq.size()));
	}

	cout << roomcnt << "\n";
	for(int i=0; i<n; i++){
		cout << ans[i] << " ";
	}
}
//haze_12

