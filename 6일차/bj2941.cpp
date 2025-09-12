#include <iostream>
#include <vector>

using namespace std;

// int main(){
//     string input;
//     cin >> input;

//     int cnt = 0;

//     for(int i = 0; i < input.size(); i++){
//         // 인덱스 범위를 초과할 위험이 있다.
//         // 만약 i 가 마지막 인덱스라면 i+1 은 범위를 벗어나게 된다.
//         if(input[i] == 'c'){
//             if((input[i + 1] == '=') || (input[i + 1] == '-')){
//                 cnt++;
//                 i++;
//             }else{
//                 cnt++;
//             }
//         }else if(input[i] == 'd'){
//             if(input[i + 1] == 'z' && input[i + 2] == '='){
//                 cnt++;
//                 i += 2;
//             }else if(input[i + 1] == '-'){
//                 cnt++;
//                 i++;
//             }else{
//                 cnt++;
//             }
//         }else if(input[i] == 'l'){
//             if(input[i + 1] == 'j'){
//                 cnt++;
//                 i++;
//             }else{
//                 cnt++;
//             }
//         }else if(input[i] == 'n'){
//             if(input[i + 1] == 'j'){
//                 cnt++;
//                 i++;
//             }else{
//                 cnt++;
//             }
//         }else if(input[i] == 's'){
//             if(input[i + 1] == '='){
//                 cnt++;
//                 i++;
//             }else{
//                 cnt++;
//             }
//         }else if(input[i] == 'z'){
//             if(input[i + 1] == '='){
//                 cnt++;
//                 i++;
//             }else{
//                 cnt++;
//             }
//         }else{
//             cnt++;
//         }
//     }

//     cout << cnt << endl;
// }

// 피드백 버전

// 글자 수 체크하는 반환하는 함수 
int match_len(const string& s, int i){
    int n = s.size();

    // 인덱스값이 배열 크기보다 작을때만 검사

    if(i + 2 < n && s[i] == 'd' && s[i+1] == 'z' && s[i+2] == '='){
        return 3;
    }

    if(i+1 < n){
        if(s[i] == 'c' && (s[i+1] == '=' || s[i+1] == '-')) return 2;
        if(s[i] == 'd' && s[i+1] == '-') return 2;
        if((s[i] == 'l' || s[i] == 'n') && s[i+1] == 'j') return 2;
        if((s[i] == 's' || s[i] == 'z') && s[i+1] == '=') return 2;
    }

    return 1;
}

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); ) {
        int len = match_len(s, i);  // 1 or 2 or 3
        cnt++;
        i += len;
    }
    cout << cnt << '\n';
}