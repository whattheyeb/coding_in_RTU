#include <iostream>

using namespace std;

int main(){
    // 단어 개수(int), 단어(string)
    int wordCnt;
    cin >> wordCnt;

    string word;
    // 이전 문자를 기억
    char prev;

    // 이미 "등장 완료" 처리된 문자 집합
    bool seen[26];

    for(int i = 0; i < wordCnt; i++){
        cin >> word;
        seen[word[0] - 'a'] = 1;
        for(int j = 1; j < word.size(); j++){
            prev = word[j - 1];
            if(prev == word[j]){
                continue;
            }else{
                if(seen[word[j] - 'a']){

                }else{

                }
            }
        }
    }
    

    


}