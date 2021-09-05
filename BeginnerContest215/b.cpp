/**
 * AtCoder Biggier Contest 215
 * B - log2(N)
 */

#include <iostream>
using namespace std;

int main(){

  unsigned long long input = 0;
  unsigned long long ans = 0;

  cin >> input;

  while(input/2 != 0){
    input /= 2;
    ans++;
  }
  
  cout << ans << endl;
  
  return 0;
}
