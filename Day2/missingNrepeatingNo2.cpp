#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a) {
  int n =a.size();
  // step 1. finding xor of all nums
  int xr=0;
  for(int i=0;i<n;i++){
    xr^=a[i];
    xr^=(i+1);
  }
  //step 2: find the differentiating bit num.
  int number = xr &  ~(xr-1);
  // Step3: group the numbers
  int one=0,zero=0;
  for(int i=0;i<n;i++){
    // part of one group
    if(a[i]& number !=0)
      one ^=a[i];
    // part of zero group
    else
      zero^=a[i];
  }
  for(int i=1;i<=n;i++){
    if(number & i !=0)
    one^=i;
    else 
    zero^=i;
  }
  // final step : to find which one is missing and repeating
  int ct=0;
  for(int i=0;i<n;i++){ 
    if(zero==a[i]) ct++;
  }
  if(ct==2)
    return {zero,one};
  return {one,zero};
  

}

int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}