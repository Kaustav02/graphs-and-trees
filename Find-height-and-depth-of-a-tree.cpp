#include<bits/stdc++.h>

using namespace std;

const int n=1e5+10;
bool vis[n];
vector<int>graph[n];
vector<int> depth(n) , height(n);

void dfs(int vertex , int par=0){


    vis[vertex]=true;

    for(int child : graph[vertex]){
        
        if(child == par){
            continue;
        }
        else{
            depth[child]=depth[vertex]+1;

            dfs(child , vertex);

            height[vertex]= max(height[child]+1,height[vertex]);
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
    dfs(1);
    cout<<*max_element(height.begin(),height.end())<<endl;
    cout<<*max_element(depth.begin(),depth.end())<<endl;







    return 0;
}