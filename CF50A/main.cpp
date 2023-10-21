#include<iostream>

using namespace std;

int function(int m, int n){
    if(m%2==0){
        return (m/2)*n;
    }
    else{
        return(m/2*n) +n/2;
    }
}

int main(){
    int m,n;
    cin>>m>>n;
    cout<<function(m,n);
    
}