#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int count_even(int* arr, int size)
{
    int cnt = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    const int maxN = 1000;
    int arr[maxN];
    int n; cin >>  n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    int even_number = count_even(arr, n);
    cout << even_number << endl;
}
