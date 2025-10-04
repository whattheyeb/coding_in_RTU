#include <iostream>

using namespace std;

int main(){
    int arr[10] = {1, 3, 5, 13, 9, 6, 7, 10, 2, 6};
    for(int i = 0; i < 10; i++){
        for(int j = i; j > 0; j--){
            if(arr[j] < arr[j - 1]){
                swap(arr[j], arr[j - 1]);
            }else{
                break;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}