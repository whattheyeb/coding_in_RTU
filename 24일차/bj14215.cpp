#include <iostream>

using namespace std;

int main(){
    int t[3];
    cin >> t[0] >> t[1] >> t[2];

    int sameCnt = 0;
    if(t[0] == t[1] && t[1] == t[2] && t[0] == t[2]) sameCnt = 3;
    else if(t[0] != t[1] && t[1] != t[2] && t[0] != t[2]) sameCnt = 0;
    else sameCnt = 2;

    int maxIdx = 0;
    
    for(int i = 0; i < 3; i++){
        if(t[maxIdx] <= t[i]){
            maxIdx = i;
        }
    }

    int sum = 0;
    int sameIdx = 3;
    if(sameCnt == 3){
        sum = 3 * t[0];
    }else if(sameCnt == 2){
        for(int i = 0; i < 3; i++){
            if(t[maxIdx] == t[i] && i != maxIdx){
                sameIdx = i;
            }
        }
        if(sameIdx < 3){
            for(int i = 0; i < 3; i++){
                sum += t[i];
            }
        }else{
            for(int i = 0; i < 3; i++){
                if(i != maxIdx){
                    sum += t[i];
                }
            }
            sum = sum + sum - 1;
        }
    }else{
        for(int i = 0; i < 3; i++){
            if(maxIdx != i){
                sum += t[i];
            }
        }
        sum = 2 * sum - 1;
    }
    cout << sum << '\n';
}