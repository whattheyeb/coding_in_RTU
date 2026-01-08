#include <iostream>

using namespace std;

int main(){
    // 거스름돈 액수
    int n;
    cin >> n;
    int count5 = -1;
    int count2 = -1;
    
    // 5원으로만 거스름돈을 내줄수있음
    if(n % 5 == 0){
        count2 = 0;
        count5 = n / 5;
    }else{
        // 2원과 5원 조합으로 거스름돈을 내줄수있음
        count5 = n / 5;
        while(count5 != 0){
            if((n - 5 * count5) % 2 == 0){
                count2 = (n - 5 * count5) / 2;
                break;
            }
            count5--;
        }
    }

    if(n < 5){
        if(n % 2 == 0){
            count2 = n / 2;
        }
    }

    int count = count2 + count5;

    // 6과 8과 같이 5원 거스름돈은 낼수없지만 2원 거스름돈으로는 낼수있는값
    if(count == -1 && n % 2 == 0){
        count = n / 2;
    }
    cout << count << '\n';
}