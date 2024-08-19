#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int original = n;
    int sum = 0;
    while(n != 0){
        int rem = n%10;
        sum += pow(rem,3);
        n = n/10;
    }
    
    if(original == sum){
        cout <<"armstrong number";
        
    }else cout << "not an armstrong number";
}
