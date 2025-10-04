#include <iostream>

using namespace std;

int arr[10] = {1, 4, 20, 3, 5, 7, 2, 6, 10, 9};

int main(){
    int mini;
    for(int i = 0; i < 10; i++){
        mini = i;
        for(int j = i + 1; j < 10; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        if(mini != i){
            swap(arr[mini], arr[i]);
        }
    }
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
}