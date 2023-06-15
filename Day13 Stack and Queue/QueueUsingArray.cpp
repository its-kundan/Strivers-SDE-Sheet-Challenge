#include<iostream>
using namespace std;

class Queue{
  int *arr;
  int start,end,curSize,maxSize;
  public:
    Queue() {
      arr = new int[16];
      start = -1;
      end = -1;
      currSize=0;
    }
  Queue(int m){
    maxSize=m;
    arr = new int[maxSize];
    start = -1;
    end = -1;
    currSize = 0;
  }
  void push(int newElement){
    if(currSize== maxSize){
      cout<<"Queue is full"<<endl;
      exit(1);
    }
  }
}