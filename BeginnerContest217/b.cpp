/**
 * AtCoder Beginner Contest 217
 * B - AtCoder Quiz  
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define rep(i,n) for(int i = 0; i < n; ++i)
using namespace std;

int main(){

  string s;

  vector<string> contests = {"ABC", "ARC", "AGC", "AHC"};

  rep(i, 3) {
    cin >> s;
    contests.erase(find(contests.begin(), contests.end(),s));
  }

  string ans = contests.at(0);

  cout << ans << endl;
  
  return 0;
}
