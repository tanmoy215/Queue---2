#include<bits/stdc++.h>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        int m = q.front();
        q.pop();
        cout<<m<<" ";
        q.push(m);
    }
    cout<<endl;
}
void reverse(queue<int>& q,int k){
    stack<int> st;
    int n = q.size();
    for(int i=0;i<k;i++){ //push into stack
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){  //stack to queue
        int x = st.top();
        q.push(x);
        st.pop();
    }
    for(int i=0;i<n-k;i++){ 
        int x = q.front();
        q.pop();
        q.push(x);  
    }
}
int main(){
    queue<int> q;
    q.push(10);
     q.push(20);
      q.push(30);
       q.push(40);
        q.push(50);
        int k;
        cout<<"enter k : ";
        cin>>k;
        display(q);
        reverse(q,k);
        display(q);
    return 0;
}