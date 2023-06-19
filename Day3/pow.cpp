#include<bits/stdc++.h>
using namespace std;
double myPow(double x, int n) {
      double ans = 1.0;
      int flag=0;
      if(n<0)
       n=-n,flag=1;
      for (int i = 0; i < n; i++) {
        ans = ans * x;
      }
      if(flag)
       return 1/ans;
  return ans;
}
int main()
{ 
  // double x;
  // int n;
  // cin>>n>>x;
  
    cout<<myPow(2,-2)<<endl;
}