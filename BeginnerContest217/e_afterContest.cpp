/**
 * AtCoder Beginner Contest 217
 * E - Sorting Queries 
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define rep(i,n) for(int i = 0; i < n; ++i)
using namespace std;

int main(){

  int q;
  cin >> q;
  vector<int> a;
  vector<int> a_sort;

  rep(i,q) {
    int c;
    cin >> c;
    switch(c) {
    case 1:
      {
	int x;
	cin >> x;
	a.push_back(x);
	if(a_sort.size() == 0) {
	  a_sort.push_back(x);
	} else {
	  auto itr = lower_bound(a_sort.begin(), a_sort.end(), x);
	  if(itr != a_sort.end()) a_sort.insert(itr, x);
	  else a_sort.push_back(x);
	}
      }
      break;
    case 2:
      {
	int del = a.at(0);
	cout << del << endl;
	a.erase(a.begin());
	auto itr = lower_bound(a_sort.begin(), a_sort.end(), del);
	if(itr != a_sort.end()) a_sort.erase(itr);
      }
      break;
    case 3:
      {
	a = a_sort;
      }
      break;
    }
  }
  
  
  cout << endl;
  
  return 0;
}
