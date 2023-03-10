#include<bits/stdc++.h>

using namespace std;

const int n=1e5+10;
bool vis[n];
vector<int>graph[n];
int sum[n];

void dfs(int vertex , int par=0){


    vis[vertex]=true;
    sum[vertex]+=vertex;

    for(int child : graph[vertex]){
        
        if(child == par){
            continue;
        }
        dfs(child,vertex);
        
        sum[vertex]+=sum[child];
    }

}





int main(){
    int m,n;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int  v, h;
        cin>>v>>h;
        graph[v].push_back(h);
        graph[h].push_back(v);
    }

    dfs(1);
    cout<<sum[1]<<endl;


 return 0;
}