#include<bits/stdc++.h>
 
using namespace std;

//vimp question
//http://www.usaco.org/index.php?page=viewproblem2&cpid=1063
//http://www.usaco.org/current/data/sol_prob2_silver_dec20.html -> contest analysis
//https://www.youtube.com/watch?v=AH1wyxq8nPM&t=1082s - > video analysis

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


//having the x and y coordinates ->
typedef pair<int,int> Point;
bool ycomp(Point p, Point q) { return p.second < q.second; }
 
const int MAX_N = 2500; //given value of N

int N, Psum[MAX_N+1][MAX_N+1];
Point P[MAX_N];
 
int rsum(int x1, int y1, int x2, int y2) //sum of the segment
{
  return Psum[x2+1][y2+1] - Psum[x2+1][y1] - Psum[x1][y2+1] + Psum[x1][y1];
}


int main()
{
  cin >> N;
  for (int i=0; i<N; i++) {
    int x, y;
    cin >> x >> y;
    P[i] = make_pair(x,y);
  }

  //doing coordinate compression -> 
  sort(P, P+N); 
  for (int i=0; i<N; i++) P[i].first = i+1;
  sort(P, P+N, ycomp); 
  for (int i=0; i<N; i++) P[i].second = i+1;
  
  //1 marks that there's a cow in the prefix sum matrix
  //others will be marked 0
  for (int i=0; i<N; i++) Psum[P[i].first][P[i].second] = 1;
  

  //making the prefix sum 2D array
  //helps us to find number of cows we can include in a segment
  for (int i=1; i<=N; i++)
    for (int j=1; j<=N; j++)
      Psum[i][j] += Psum[i-1][j] + Psum[i][j-1] - Psum[i-1][j-1];
  
  ll answer = 0;
  for (int i=0; i<N; i++) 
    for (int j=i; j<N; j++) {

      //find the left and right boundaries our rectangle segment
      int x1 = min(P[i].first, P[j].first) - 1;
      int x2 = max(P[i].first, P[j].first) - 1;
      answer += rsum(0,i,x1,j) * rsum(x2,i,N-1,j); //using prefix sum to find that given subsets
      //so we set our x boundaries, left part of the rectangle (x1) and the right side of rectangle(x2)
      //within it it tells us how many cows are outside above the segment within x boundaries 
      //and also below the segment within x boundaries
      //this j iterates thru all y directions and rsum calculates them within segment x1 to x2 for every i.
      //exact explanation in the official analysis video
    }

  cout << answer + 1 << "\n"; // adding a empty subset
  
}
//haze_12

