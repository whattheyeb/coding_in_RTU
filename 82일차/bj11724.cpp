#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visited[1001];
vector<int> graph[1001];
int cnt = 0;

void dfs(int n){
    visited[n] = true;
    for(int i = 0; i < graph[n].size(); i++){
        int y = graph[n][i];
        if(!visited[y]){
            dfs(y);
        } 
    }
    cnt++;
}

int main(){
    int n, m;
    cin >> n >> m;
    int u, v;
    int first;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        if(i == 0) first = u;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(first);

    cout << cnt << '\n';

}