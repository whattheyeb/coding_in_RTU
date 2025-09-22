#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//좌표 구조체 만들기
struct Coord{
    int x;
    int y;
};

bool compare(Coord& a1, Coord& a2){
    if(a1.x == a2.x) return a1.y < a2.y;
    return a1.x < a2.x; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<Coord> t(N);
    int input1, input2;
    for(int i = 0; i < N; i++){
        cin >> input1 >> input2;
        t[i].x = input1;
        t[i].y = input2;
    }

    sort(t.begin(), t.end(), compare);

    for(auto i : t){
        cout << i.x << " " << i.y << "\n";
    }


}