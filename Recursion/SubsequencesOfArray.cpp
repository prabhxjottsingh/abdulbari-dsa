//Print all subsequence

#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int arr[] = {1,2,3};
int size = sizeof(arr)/sizeof(arr[0]);
    
void subsequence(int idx, vector<int> &v){
    if(idx == size){
        for(auto a:v)
            cout << a <<" ";
        cout<<endl;
        return;
    }
    v.push_back(arr[idx]);
    subsequence(idx + 1, v);
    v.erase(remove(v.begin(), v.end(), arr[idx]), v.end());
    subsequence(idx + 1, v);
}

int main(){
    vector<int> v;
    subsequence(0, v);
}