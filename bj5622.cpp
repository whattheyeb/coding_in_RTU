#include <iostream>

using namespace std;

int main(){
    string input;

    cin >> input;

    int dial[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};

    int sum = 0;

    for(int i = 0; i < input.size(); i++){
        sum += dial[input[i] - 'A'];
    }

    // 내 코드
    // for(int i = 0; i < input.size(); i++){
    //     if(input[i] == 'A' || input[i] == 'B' || input[i] == 'C'){
    //         sum += 3;
    //     }else if(input[i] == 'D' || input[i] == 'E' || input[i] == 'F'){
    //         sum += 4;
    //     }else if(input[i] == 'G' || input[i] == 'H' || input[i] == 'I'){
    //         sum += 5;    
    //     }else if(input[i] == 'J' || input[i] == 'K' || input[i] == 'L'){
    //         sum += 6;
    //     }else if(input[i] == 'M' || input[i] == 'N' || input[i] == 'O'){
    //         sum += 7;
    //     }else if(input[i] == 'P' || input[i] == 'Q' || input[i] == 'R' || input[i] == 'S'){
    //         sum += 8;
    //     }else if(input[i] == 'T' || input[i] == 'U' || input[i] == 'V'){
    //         sum += 9;
    //     }else if(input[i] == 'W' || input[i] == 'X' || input[i] == 'Y' || input[i] == 'Z'){
    //         sum += 10;
    //     }
    // }

    cout << sum << "\n";
}