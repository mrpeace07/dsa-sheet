#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int> s;

    vector<int> arr ={1,2,3,4};
  
for(int i=0; i<arr.size();i++){
s.push(arr[i]);
}

while(!s.empty()){
    cout<< s.top() << " ";
    s.pop();
}

}