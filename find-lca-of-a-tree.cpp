#include <bits/stdc++.h>

using namespace std;

const int n = 1e5 + 10;
vector<int> graph[n];

int parent[n];

void dfs(int vertex, int par=0){
    parent[vertex]=par;

    for(int child : graph[vertex]){
        
        if(child == par){
            continue;
        }
        dfs(child,vertex);
    }
}


vector<int>path(int vertex){
    vector<int>ans;
    while(vertex != 0){
        ans.push_back(vertex);
        vertex=parent[vertex];
    }
    reverse(ans.begin(),ans.end());
    return ans;
}



int main()
{
    int m, n;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int v, h;
        cin >> v >> h;
        graph[v].push_back(h);
        graph[h].push_back(v);
    }

    dfs(1);

    int a , b;
    cout<<" Enter two nodes"<<endl;
    cin>>a>>b;
    vector<int>path_a=path(a);
    vector<int>path_b=path(b);

    int lca =0;

    int min_len = min(path_a.size(),path_b.size());

    for(int i=0;i<min_len;i++){
        if(path_a[i]==path_b[i]){
            lca=path_a[i];

        }

        else{
            break;
        }
    }

    cout<<"LCA "<< " "<<lca<<endl;



    return 0;
}