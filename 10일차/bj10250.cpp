#include <iostream>

using namespace std;

int main(){
    int testcase;

    cin >> testcase;

    // 문제에서 변수에 대해 제공하는 경우, 문제 표기와 동일하게 둬라
    int H, W, N;

    int N_H;
    int N_W;

    for(int i = 0; i < testcase; i++){
        cin >> H >> W >> N;
        
        // 손님 숫자마다 루프를 도는 것은 불필요함
        // for(int j = 1; j < N_; j++){
        //     if(N_H == H){
        //         N_H = 1;
        //         N_W++;
        //     }else{
        //         N_H++;
        //     }
        // }

        // 피드백 버전
        N_H = ((N - 1) % H) + 1;
        N_W = ((N - 1) / H) + 1;
        // H, W 둘다 99 아래이므로 100을 곱하여 출력하는게 안전함
        cout << N_H * 100 + N_W << '\n';
    }
}