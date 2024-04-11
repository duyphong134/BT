#include <iostream>
#include <stdlib.h>
using namespace std;


void binarySearch(int arr[], int left, int right, int numberToFind)
{
    while(left <= right){
        int *midPtr = arr + ((right + left) / 2);
        if(*midPtr > numberToFind){
            right = midPtr - arr - 1;
        }else if(*midPtr < numberToFind){
            left = midPtr - arr + 1;
        }else{
            cout << "Found the number" << endl;
            return;
        }
    }
    cout << "The number is not in the array" << endl;

}
int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int left = 0, right = n - 1;
    int numberToFind; cin >> numberToFind;
    binarySearch(arr, left, right, numberToFind);


}
