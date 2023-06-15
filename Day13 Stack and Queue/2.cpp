#include<bits/stdc++.h>
using namespace std;

class Queue {
  int *arr;
  int start,end,currSize,maxSize;
  public:
  Queue{
    arr = new int[16];
    start=-1;
    end=-1;
    currSize =0;
  }

  Queue(int maxSize){
    (* this).maxSize = maxSize;
    arr = new int[maxSize];
    start = -1;
    end = -1;
  }
}