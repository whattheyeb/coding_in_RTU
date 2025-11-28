#include <iostream>

using namespace std;

int n, m;
// 선택한 수를 저장
int arr[9]; 

// 숫자를 사용했는지 체크
bool visited[9];

// 중복 없는 순열 (Permutation) 함수
void permutation(int depth){
    // 순열을 완성한 상태 (m개가 모두 채워지면 출력하고 종료)
    if(depth == m){
        for(int i = 0; i < m; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= n; i++){
        // 아직 사용하지 않은 숫자라면
        if(!visited[i]){
            // 방문 표시를 하고
            visited[i] = true;
            // 배열에 추가
            arr[depth] = i;
            // 이제 다음 depth로 넘어간다
            permutation(depth + 1);
            visited[i] = false;
        }
    }
}

int main(){
    cin >> n >> m;
    permutation(0);
}
