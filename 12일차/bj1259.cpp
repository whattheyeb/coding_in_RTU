#include <iostream>
#include <vector>

using namespace std;

int main(){
    int input;
    vector <int> digit;
    int copyInput;
    bool isP;

    do{
        digit.clear();

        cin >> input;
        // 먼저 입력을 받은 후, 0이면 어떤 결과도 출력하지 않고 break
        if(input == 0){
            break;
        }

        // 팰린드롬 flag 초기화
        isP = true;
        copyInput = input;
        // while 문을 돌며 각 자리수 저장
        while(copyInput != 0){
            digit.push_back(copyInput % 10);
            copyInput /= 10;
        }

        // 양쪽끝 자리수를 비교하며 만약 다르면 flag를 false로 바꾸고 바로 break;
        for(int i = 0; i < (digit.size() / 2); i++){
            if(digit[i] != digit[digit.size() - i - 1]){
                isP = false;
                break;
            }
        }

        // 한자리수면 무조건 true
        if(digit.size() == 1){
            isP = true;
        }

        // 결과를 출력한다
        if(isP){
            cout << "yes" << '\n';
        }else{
            cout << "no" << '\n';
        }
        

    }while(input != 0);
}