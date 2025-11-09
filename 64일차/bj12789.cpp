#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> student;

    int order = 1;
    int reorder = n;
    bool nice = true;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == reorder){
            nice = true;
            reorder--;
        }else if(x == order){
            nice = true;
            order++;
        }else{
            nice = false;
        }
    }
    if(nice){
        cout << "Nice" << '\n';
    }else{
        cout << "Sad" << '\n';
    }

}