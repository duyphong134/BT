#include <iostream>
#include <stdlib.h>
using namespace std;

bool is_palindrome(char a[], int n)
{
    for(int i = 0; i < n / 2; i++){
        if(a[n - i - 1] != a[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    int n; cin >> n;
    char a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    if(is_palindrome(a, n)){
        cout << "Is_panlidrome" << endl;
    }else{
        cout << "Not_panlidrome" << endl;
    }
}
