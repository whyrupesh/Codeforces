#include<iostream>

using namespace std;

string check(string w){
    if(w.length()<=10){
        return w;
    }
    else{
        char w1 = w.at(0);
        int num = w.length()-2;
        string w2 = to_string(num);
        char w3 = w.at(w.length()-1);
    
        return w1+w2+w3;
    }

}

int main(){
    int n;
    cin>>n;
    string word;
    string w[n];
    for(int i=0;i<n;i++){
        cin>>word;
        w[i]=check(word);
    }
    for(int i=0;i<n;i++){
        cout<<w[i]<<endl;
    }

}