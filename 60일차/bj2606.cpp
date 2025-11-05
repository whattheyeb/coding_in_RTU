#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<bool> computer(n + 1, false);
    int m;
    cin >> m;
    int a, b;
    computer[1] = true;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        if(computer[a]){
            computer[b] = true;
        }else if(computer[b]){
            computer[a] = true;
        }
    }
    int cnt = 0;
    for(int i = 2; i <= n; i++){
        if(computer[i]) cnt++;
    }
    cout << cnt << '\n';
}