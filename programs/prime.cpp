#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;
    
    if( n <= 3) cout <<"its prime";
    int flag = 0;
    
    for(int i = 3; i<n; i++){
        if(n % i== 0){
            flag = 1;
        }  
    }
    if(flag == 0){
        cout <<" yo its prime";
}else
        cout <<"its not prime buddy";
    
} // when asked if u can optimise this or not then tell we can clear those number that are divisible by 2 and u can easily make this optimised
