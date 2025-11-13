#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

bool visited[1001];
vector<int> graph[10001];

bool visitedDfs[1001];


void dfs(int d){
    cout << d << ' ';
    visitedDfs[d] = true;
    for(int i = 0; i < graph[d].size(); i++){
        int y = graph[d][i];
        if(!visitedDfs[y])
            dfs(y);   
    }
}

void bfs(int n){
    queue<int> q;
    cout << n << ' ';
    q.push(n);
    visited[n] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i = 0; i < graph[x].size(); i++){
            int y = graph[x][i];
            if(!visited[y]){
                cout << y << ' ';
                q.push(y);
                visited[y] = true;
            }
        }
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 정점 개수 n (~1000)
    // 간선 개수 m (~10000)
    // 탐색을 시작할 정점의 번호 v
    int n, m, v;
    cin >> n >> m >> v;

    // 간선이 연결하는 두 정점의 번호 입력
    int p1, p2;
    for(int i = 0; i < m; i++){
        cin >> p1 >> p2;
        graph[p1].push_back(p2);
        graph[p2].push_back(p1);
    }

    for(int i = 0; i < m; i++){
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(v);
    cout << '\n';
    bfs(v);


}