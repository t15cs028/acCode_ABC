/**
 * AtCoder Biggier Contest 215
 * C - One More aab aba baa
 */

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

enum alphabet {
	       a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,all
};

int getSortOrder(string str){

  
  int iCnt[all];
  for(int i = 0; i < all; i++){
    iCnt[i] = 0;
  }
  
  for(char c : str) {
    iCnt[c-'a']++;
  }

  int result = 1;
  for(int i = str.length(); i > 0; i--){
    result *= i;
  }

  int exclude = 1;
  for(int i : iCnt){
    cout << i << endl;
    if(i != 0){
      int iTmp = 1;
      for(int j = i; j > 0; j--){
	iTmp *= j;
      }
      exclude *= iTmp;
    }
  }
  
  return result / exclude;
}

int main(){

  string str = "";
  int K = 0;

  cin >> str >> K;
  
  // sort
  sort(str.begin(), str.end());
  
  int order = 0;
  int iCnt = str.length();

  string ans = str;
  string pre = "";
  while(order < K){
    iCnt--;
    order += getSortOrder(str.substr(iCnt));
  }

  cout << iCnt << endl;
  cout << order << endl;
  cout << ans << endl;
  
  return 0;
}
