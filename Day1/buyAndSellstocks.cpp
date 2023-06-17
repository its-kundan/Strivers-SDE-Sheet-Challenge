#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &arr){
  int maxPro =0;
  int n =arr.size();
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[j]>arr[i]){
        maxPro = max(arr[j]- arr[i], maxPro);
      }
    }
  }
  return maxPro;
}
int maxProfit2(vector<int> &arr){
  int maxPro =0;
  int n= arr.size();
  int minPrice = INT_MAX;
  for(int i=0;i<n;i++){
    minPrice = min(minPrice, arr[i]);// stuck at minimum value
    maxPro =max(maxPro,arr[i] - minPrice);// store max profit till i;

  }
  return maxPro;
}
int main() {
    vector<int> arr = {7,1,5,3,6,4,71};
    int maxPro = maxProfit2(arr);
    cout << "Max profit is: " << maxPro << endl;
}