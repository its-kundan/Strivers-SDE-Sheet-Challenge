#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    int n = a.size();
    int Hash[n+1]={0};// storing the frequency of emements;
    for(int i=0;i<n;i++){
      Hash[a[i]]++;
    }
    int repeating =-1;
    int missing =-1;
    for(int i=1;i<=n;i++){
      if(Hash[i]==2) repeating =i;
      if(Hash[i]==0) missing =i;
      if(missing !=-1 and repeating !=-1){
        break;
      }
    }
    return {repeating, missing};
}

int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}