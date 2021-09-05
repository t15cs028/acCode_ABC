/**
 * AtCoder Beginner Contest 217
 * C - Inverse of Permutation   
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define rep(i,n) for(int i = 0; i < n; ++i)
using namespace std;

int main(){

  int n;
  cin >> n;
  int q[n];

  rep(i,n){
    int p = 0;
    cin >> p;
    q[p-1] = i+1;
  }

  rep(i,n) {
    if(i != 0) cout << " ";
    cout << q[i];
  }

  cout << endl;
  
  return 0;
}
