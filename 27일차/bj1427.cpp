#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b){
    return a > b;
}

int main(){
    string num;
    cin >> num;
    
    vector<int> arr(num.size());
    for(int i = 0; i < num.size(); i++){
        arr.push_back(num[i]);
    }
    sort(arr.begin(), arr.end(), comp);
    for(int i = 0; i < num.size(); i++){
        cout << arr[i] - 48;
    }
    cout << "\n";
    
}