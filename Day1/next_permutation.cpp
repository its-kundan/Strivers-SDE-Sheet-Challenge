#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v = {1,3,2,4};
  next_permutation(v.begin(),v.end());
  for(auto value:v){
    cout<<value<<" ";
  }
  return 0;
}