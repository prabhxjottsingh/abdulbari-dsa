#include<bits/stdc++.h>
using namespace std;

void permu(string s, int i, int n){
    static int count;
    int j;
    if(i==n){
        count++;
        cout<<s<<endl;
    }
    else{
        for(j=i; j<=n; j++){
            swap((s[i]), (s[j]));
            permu(s, i+1, n);
            swap((s[i]), (s[j]));
        }
    }
}


int main(){
    string ch;
    cin>>ch;
    permu(ch, 0, ch.length()-1);
    return 0;
}