#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r){
  long long res = 1;
  for(int i=0;i<r;i++){
    res*=n-i;
    res/=i+1;
  }
  return (int)res;
}

int pascalTriangleElement(int r, int c){
  int element = nCr(r-1,c-1);
  return element;
}
void pascalTriangleRow(int n){// here n is row
  for (int c = 1; c <= n; c++) {
        cout << nCr(n - 1, c - 1) << " ";
    }
    // cout<<n<<endl;
}
void pascalTriaglePyramid(int n){
  cout<<1<<endl;
  for(int row=1;row<=n;row++){
    for(int col=1;col<=row;col++){
      cout<<nCr(row-1,col-1)<<" ";
    }
    cout<<endl;
  }
}

int main(){
  int r=4,c=2;
  cout<<pascalTriangleElement(r,c)<<endl;
  pascalTriangleRow(5);
  pascalTriaglePyramid(3);

  return 0;
}