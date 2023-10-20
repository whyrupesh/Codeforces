#include<iostream>

using namespace std;

int stringdiffer(string s){
    string name = "codeforces";
    int count=0;
    for(int i=0;i<10;i++){
        if(name[i]!=s[i]){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    string s;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>s;
        arr[i]=stringdiffer(s);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}