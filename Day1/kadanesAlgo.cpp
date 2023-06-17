#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n){
  int maxi = INT_MIN;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      int sum = 0;
      for(int k=i;k<=j;k++){
        sum+=arr[k];
      }
      maxi = max(maxi,sum);
    }
  }
  return maxi;
}
int maxSubarraySum2(int arr[],int n){
  int maxi = INT_MIN;
  for(int i=0;i<n;i++){
    int sum = 0;
    for(int j =i;j<n;j++){
      sum+=arr[j];
      maxi = max(maxi,sum);
    }
  }
  return maxi;
}

long long maxSubarraySum3(int arr[], int n){
  long long maxi = LONG_MIN;
  long long sum = 0;
  for( int i=0;i<n;i++){
    sum+=arr[i];
    if(sum>maxi) maxi = sum;
    if(sum<0) sum = 0;
  }
  return maxi;
}
int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    long long n = sizeof(arr) / sizeof(arr[0]);
    long long maxSum = maxSubarraySum3(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}