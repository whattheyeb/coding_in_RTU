#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void isRight(int hyp, int a1, int b1){
    if((hyp * hyp) == (a1 * a1 + b1 * b1)){
        cout << "right" << "\n";
    }else{
        cout << "wrong" << "\n";
    }
}

int main(){
    int len1, len2, len3;
    // max 는 표준 함수 std::max 와 의미가 겹친다.
    int hyp;
    int a[3];

    while(cin >> a[0] >> a[1] >> a[2]){
        if(a[0] == 0 && a[1] == 0 && a[2] == 0){
            break;
        }
        sort(begin(a), end(a));
        isRight(a[2], a[1], a[0]);
    }

    // do{
    //     cin >> len1 >> len2 >> len3;
        
    //     hyp = len1;
    //     if(len1 < len2){
    //         hyp = len2;
    //         if(len2 < len3) hyp = len3;
    //     }else if(len1 < len3){
    //         hyp = len3;
    //         if(len3 < len2) hyp = len2;
    //     }
    //     if(hyp == len1){
    //         isRight(hyp, len2, len3);
    //     }else if(hyp == len2){
    //         isRight(hyp, len1, len3);
    //     }else if(hyp == len3){
    //         isRight(hyp, len1, len2);
    //     }
    // }while(len1 != 0 || len2 != 0 || len3 != 0);
}