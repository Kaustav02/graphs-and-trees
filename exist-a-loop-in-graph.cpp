#include<bits/stdc++.h>

using namespace std;

const int n=1e5+10;
bool vis[n];
vector<int>graph[n];

bool dfs(int vertex, int par){
    // cout<<vertex<<endl;

    vis[vertex]=true;
    bool loop = false;

    for(int child : graph[vertex]){
        // cout<<"parent"<<" "<< vertex <<" "<<"child "<<child<<endl;
        if(vis[child] and child==par) continue;
        if(vis[child]==true){
            return true;
            
        }
        loop |=dfs(child,vertex) ;
    }
    return loop;

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
    //taking input in a graph node and connected edges
    bool loop = false;
    for(int i=1;i<=n;i++){
        if(vis[i]){
            continue; ;

        }
        if(dfs(i,0)){
            loop = true;
            break;
        }
    }

    cout<<loop<<endl;
    

    return 0;
}