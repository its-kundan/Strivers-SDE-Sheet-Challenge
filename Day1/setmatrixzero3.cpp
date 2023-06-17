#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> zerMatrix(vector<vector<int>> &matrix,int n, int m){
  int col0=1;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(matrix[i][j]==0){
        matrix[i][0]=0;
        if(j!=0)
        matrix[0][j]=0;
        else
        col0=0;
          
        

      }
    }
  }
}
int main() {
  
    
  
  return 0;
}