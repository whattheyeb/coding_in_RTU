#include <iostream>

using namespace std;

int main(){
    // a 층의 b 호에 살려면 (a - 1)층의 1호부터 b호까지 사람들의 수의 합만큼 사람들을 데려와야한다.
    int T;
    cin >> T;

    // k층에 n호에는 몇명이 살고있는가를 출력
    int k, n;

    // 3층 ) 1 4 10 20 ...
    // 2층 ) 1 3 6 10 ... 
    // 1층 ) 1 2 3 4 5 ...
    // 예시를 보면 알 수 있듯이 n층 k호에 사는 사람수 = n층 k - 1호 + n - 1층 k 호이다.

    int person[15][15] = {0}; 
    for(int i = 1; i < 15; i++){
        person[0][i] = i;
    }

    for(int i = 1; i < 15; i++){
        for(int j = 1; j < 15; j++){
            person[i][j] = person[i][j - 1] + person[i - 1][j];
        }
    }

    for(int i = 0; i < T; i++){
        cin >> k;
        cin >> n;
        cout << person[k][n] << '\n';
    }
}