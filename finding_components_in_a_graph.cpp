#include<bits/stdc++.h>

using namespace std;

const int n=1e5+10;
bool vis[n];
vector<int>graph[n];

void dfs(int vertex){

    vis[vertex]=true;

    for(int child : graph[vertex]){
        
        if(vis[child]==true){
            continue;
        }
        else{
            dfs(child);
        }
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
    //taking input in a graph node and connected edges
    
    int cnt=0;

    for(int i=1;i<=n;i++){
        if(vis[i]){
            continue; ;

        }
        else{
            dfs(i);
            cnt++;

        }
    }

    cout<<"The number of the connected components"<<" "<<cnt<<endl;







    return 0;
}