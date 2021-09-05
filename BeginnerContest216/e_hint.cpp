/**
 * AtCoder Beginner Contest 216
 * E - Amusement Park 
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using ll = unsigned long long;

#define rep(i, n) for(int i = 0; i < n; ++i)

int main(){

  int n, k;
  cin >> n >> k;

  vector<int> attractions(n);

  int ans = 0;
  int max = 0;
  int sum = 0;
  
  rep(i, n) {
    cin >> attractions.at(i);
    sum += attractions.at(i);
    if(attractions.at(i) > max) max = attractions.at(i); 
  }

  if(sum <= k){
    rep(i, n)
      rep(j, attractions.at(i)) ans += (j+1);
  }
  else {
    int min = 1;
    int pivot = 0;

    while(true) {
      pivot = (min+max)/2;
      int iCnt = 0;
      rep(i, n) {
	if(pivot <= attractions.at(i)) {
	  iCnt += (attractions.at(i)-pivot+1);
	}
	if(iCnt > k) break;
      }
      if(iCnt <= k) break;
      else min = pivot;
    }

    int iCnt = 0;
    rep(i, n) {
      if(pivot <= attractions.at(i)) {
	rep(j, (attractions.at(i)-pivot+1)) {
	  ans += (attractions.at(i)-j);
	  iCnt++;
	}
      }
    }
    rep(i, k-iCnt) ans += pivot-1;
  }

  cout << ans << endl;
  
  return 0;
}
