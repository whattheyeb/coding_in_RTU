#include <iostream>

using namespace std;

int main(){
    int A, B, V;

    cin >> A >> B >> V;
    
    // ������ ������ �̲��������ʰ� A��ŭ �ö� �� ����
    int day = (V - A + (A - B - 1)) / (A - B) + 1;

    cout << day << '\n';
}