/**
 * AtCoder Beginner Contest 216
 * C - Many Balls 
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using ll = unsigned long long;

#define rep(i, n) for(int i = 0; i < n; ++i)

int main(){

  ll N;
  cin >> N;

  string ans = "";

  while(N > 0){
    string s;
    if(N%2 == 0) {
      s = 'B';
      N /= 2;
    }
    else {
      s = 'A';
      N--;
    }
    ans = s + ans;
  }

  cout << ans << endl;
  
  return 0;
}
