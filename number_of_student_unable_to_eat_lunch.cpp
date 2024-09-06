#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> students{1,1,1,0,0,1};
    vector<int> sandwiches{1,0,0,0,1,1};
     int n = students.size();
     queue<int> q;
     for(int i=0;i<n;i++){
        q.push(students[i]);
     }
     int i =0;
     int count = 0;
     while(q.size()>0 && count!=q.size()){
        if(q.front()==sandwiches[i]){
            q.pop();
            i++;
            count = 0;
        }
        else{
            q.push(q.front());
            q.pop();
            count++;
        }
     }
     cout<<"Final ans is : "<<q.size()<<endl;
    return 0;
}