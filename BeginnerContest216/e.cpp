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

  rep(i, n){
    cin >> attractions.at(i);
  }

  sort(attractions.begin(), attractions.end(), greater<int>());

  int ans = 0;
  for(int i = 0; i < k && attractions.at(0) > 0; i++){
    ans += attractions.at(0);
    attractions.at(0)--;
    if(n > 1) sort(attractions.begin(), attractions.end(), greater<int>());
  }
  cout << ans << endl;
  
  return 0;
}
