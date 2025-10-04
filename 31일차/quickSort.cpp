#include <iostream>

using namespace std;

int n = 10;
int target[10] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};

void quickSort(int* target, int start, int end){
    // 원소 개수가 1개이면 그만둔다
    if(start >= end) return;
    // pivot은 첫번째 원소로 둔다
    int pivot = start;
    int left = start + 1;
    int right = end;
    while(left <= right){
        while(left <= end && target[left] <= target[pivot]) left++;
        while(right > start && target[right] >= target[pivot]) right--;
        if(left > right) swap(target[pivot], target[right]);
        else swap(target[left], target[right]);
    }
    quickSort(target, start, right - 1);
    quickSort(target, right + 1, end);
}

int main(){
    quickSort(target, 0 , n - 1);
    for(int i = 0; i < n; i++) cout << target[i] << ' ';
    cout << endl;
}