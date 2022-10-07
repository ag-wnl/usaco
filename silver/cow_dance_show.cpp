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

//http://www.usaco.org/index.php?page=viewproblem2&cpid=690

//https://www.youtube.com/watch?v=QJ1ZJCwWDpE&t=172s

//remember whenever you see u need to check 
//adding something and removing something
//priority queue should work in such cases
//sometimes multisets also caus of the erase and insert function

int main() {

    int n, t;
    cin >> n >> t;
    int ar[n];

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    int hi = n, lo = 1;
    //hi and lo are the bounds within which we check if
    //monotonic function is true or false
    int sol = n; //initiating with largest possible
    //value caus we need to find min

    while (lo <= hi) {
        int mid = lo + (hi - lo)/2; //binary search
        int time = 0, j = 0;
        priority_queue<int> pq; //min priority queue
        int size = 0;
        while (size < mid && j < n) {
            pq.push(-ar[j]);
            size++;
            j++;
        }

        while ((int) pq.size()) {
            time += max(0, -pq.top() - time);
            pq.pop();
            if (j < n) {
                pq.push(-(ar[j] + time));
                j++;
            }

        }

        if (time > t) {
            lo = mid + 1;
        } else {
            sol = min(sol, mid);
            hi = mid - 1;
        }
    }

    cout << sol << '\n';
}
//haze_12

