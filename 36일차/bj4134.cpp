#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    while (n--) {
        long long num;
        cin >> num;

        if (num <= 1) num = 2; 

        bool isPrime;
        while (true) {
            if (num == 2) {
                isPrime = true;
            } else if (num % 2 == 0) {
                isPrime = false;
            } else {
                isPrime = true;
                for (long long j = 3; j * j <= num; j += 2) {
                    if (num % j == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }
            if (isPrime) break;
            num++;
        }

        cout << num << '\n';
    }
}
