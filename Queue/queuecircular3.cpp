#include<iostream>
#include<queue>
using namespace std;

class MyQueue {
  int *arr;
  int cs;
  int ts;
  int s;
  int e;
  
public:
  MyQueue(int size = 5) {
      arr = new int[size];
      ts = size;
      cs = 0;
      s = 0;
      e = -1;
  }
  
  void push(int d) {
      if(cs < ts) {
          e = (e + 1) % ts;
          arr[e] = d;
          cs++;
      } else {
          cout << "Overflow" << endl;
      }
  }
  
  void pop() {
      if(cs > 0) {
          s = (s + 1) % ts;
          cs--;
      } else {
          cout << "Underflow" << endl;
      }
  }
  
  int front() {
      if(cs > 0) {
          return arr[s];
      } else {
          cout << "Queue is empty" << endl;
          return -1; // You can return some sentinel value or throw an exception here
      }
  }
  
  bool empty() {
      return cs == 0;
  }
  
  int size() {
      return cs;
  }
};

int main() {
    MyQueue q(5);
    q.push(5);
    q.push(7);
    q.push(59);
    q.push(47);
    cout << "Queue size: " << q.size() << endl;
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
