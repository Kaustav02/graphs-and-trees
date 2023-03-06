#include<bits/stdc++.h>

using namespace std;

const int n=1e3+10;
int graph[n][n];

int main(){
    int m,n;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int  v, h;
        cin>>v>>h;
        graph[v][h]=1;
        graph[h][v]=1;
    }
    return 0;
}