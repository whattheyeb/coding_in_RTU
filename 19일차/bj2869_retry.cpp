#include <iostream>

using namespace std;

int main(){
    // N / (A - B)
    // 나머지가 있는 경우 올림해야함
    int A, B, V;
    cin >> A >> B >> V;
    int day;

    // 마지막 날은 미리 빼줘야함
    if((V - A) % (A - B) == 0){
        day = (V - A) / (A - B) + 1;
    }else{
        day = (V - A) / (A - B) + 2;
    }

    cout << day << '\n';
}