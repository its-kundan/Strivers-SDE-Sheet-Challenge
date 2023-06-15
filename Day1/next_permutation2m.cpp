#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A){
  int n=A.size();
  int ind =-1;// break point.
  for(int i=n-2;i>=0;i--){
    if(A[i]<A[i+1]){
      ind=i;
      break;
    }
  }
  // break point not exist so it is the last permutation. ( so returning the first element.)
  if(ind==-1){
    reverse(A.begin(),A.end());
    return A;
  }
  // swaping the ind element with just greater on the right side of ind
  for(int i=n-1;i>ind; i--){
    if(A[i]>A[ind])
    swap(A[i],A[ind]);
    break;
  }
  // reverse the right half
  reverse(A.begin()+ind+1,A.end()); //! this is not working.
  return A;
}
int main()
{
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextGreaterPermutation(A);

    cout << "The next permutation is: [";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]";
    return 0;
}
