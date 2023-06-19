#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v){
  int n=v.size();
  int cnt=0;
  int ele;
  int cnt1=0;
  for(int i=0;i<n;i++){
    if(cnt==0){
      cnt=1;
      ele = v[i];
    }
    else if(ele ==v[i]) cnt++;
    else cnt--;
  }
  for(auto it:v){
    // cout<<it;
    if(it == ele)
    cnt1++;

  }
  if(cnt1> (n/2)) return ele;
  return -1;
}
int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}