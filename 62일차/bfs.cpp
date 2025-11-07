#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visited[101];
vector<int> graph[101];
int cnt = 0;

void bfs(int start){
    queue<int> q;
    // start를 먼저 넣는다. (start 수와 가장 인접한 노드들부터 찾는 방식)
    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        // 처음부터 체크
        int x = q.front();
        q.pop();
        // x와 연결된 노드들 탐색
        for(int i = 0; i < graph[x].size(); i++){
            int y = graph[x][i];
            // 이미 방문한건 무시, 방문안한 노드라면 queue 뒤에 추가
            if(!visited[y]){
                q.push(y);
                cnt++;
                visited[y] = true;
            }
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    int c1, c2;
    for(int i = 0; i < m; i++){
        cin >> c1 >> c2;
        graph[c1].push_back(c2);
        graph[c2].push_back(c1);
    }

    bfs(1);

    cout << cnt << '\n';
}