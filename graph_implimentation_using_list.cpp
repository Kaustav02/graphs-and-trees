#include<bits/stdc++.h>
using namespace std;

const int n=1e3+10;
vector<int>graph[n];

int main(){
    int n,m;
    
    for(int i=0;i<m;i++){
        int v,h;
        cin>>v>>h;

        graph[v].push_back(h);
        graph[h].push_back(v);
    }
    return 0;
}