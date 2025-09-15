#include <iostream>
#include <vector>

using namespace std;

int main(){
    // 해시 함수 : 임의의 길이 입력을 받아서 고정된 길이의 출력을 내보내는 함수
    // 입력 : 영문 소문자로만 이루어져있는 문자열 (그런데 각 소문자는 번호를 부여할 수 있음)
    // 해시함수 = 문자열을 번호로 치환하고, 그 값을 다 더함, 그리고 특정수 M으로 나눔
    // 하지만 해시값이 겹칠 수 있음 => 특정수를 거듭제곱하고 곱해줌
    long long int r = 31;
    long long int M = 1234567891;

    int L;
    cin >> L;

    string input;
    cin >> input;

    long long int sum = 0;
    long long int rPow = 1;
    for(int i = 0; i < L; i++){
        // 실제 C++에서는 r^i 나 시그마가 long long 범위를 넘어가므로 매 연산마다 mod를 취해서 overflow를 방지해야 합니다.
        sum = (sum + (input[i] - 'a' + 1) * rPow) % M;
        rPow = (rPow * r) % M;
    }
    cout << sum << '\n';
}