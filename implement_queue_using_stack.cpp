#include<bits/stdc++.h>
using namespace std;
class Queue{
  public:
   stack<int> st;
   stack<int> helper;
   Queue(){   //costructor

   }
   void push(int val){
    st.push(val);
   }
  void pop(){
    while(st.size()>0){
        helper.push(st.top());
        st.pop();
    }
    helper.pop();
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
     }
  }
  int back(){
     return st.top();
  }
  int front(){
      while(st.size()>0){
        helper.push(st.top());
        st.pop();
    }
  int x = helper.top();
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
     }
     return x;
  }
  void display(){
    while(st.size()>0){
        helper.push(st.top());
        st.pop();
    }
     while(helper.size()>0){
        st.push(helper.top());
        cout<<helper.top()<<" ";
        helper.pop();
     }
     cout<<endl;
  }
};
int main(){
      Queue q;
      q.push(10);
      q.push(20);
      q.push(30);
      q.push(40);
      q.push(50);
      q.push(60);
      q.push(70);
      q.push(80);
        q.display();
        q.pop();
        q.display();
        cout<<q.front()<<endl<<q.back()<<endl;
    return 0;
}