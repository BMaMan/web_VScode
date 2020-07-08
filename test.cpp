#include <iostream>
#include <algorithm>
using namespace std;

void Print(int *arr){
    for(int i=0; i<10; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main(){
    int arr[10] = {3, 6, 5, 1, 9, 2, 4, 10, 8, 7};
    Print(arr);
    sort(arr, arr+10);
    Print(arr);
}