#include<iostream>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int i=0;
    int temp=n;
    while(temp--){
        cin>>arr[i];
        i++;
    }
    int count = 0;
    i=0;
    while(n--){
        if(arr[i]>=arr[k-1] && arr[i]!=0){
            count++;
        }
        i++;
    }
    cout<<count;
}
    