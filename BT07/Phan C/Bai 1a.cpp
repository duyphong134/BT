#include <iostream>
#include <stdlib.h>
using namespace std;

void reverse (char a[], int n)
{
    for(int i = 0; i < n / 2; i++)
    {
        char tmp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = tmp;
    }
}

int main()
{
    int n; cin >> n;
    char a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(char ele: a){
        cout << ele;
    }
    cout << endl;
    reverse(a, n);
    for(char ele: a){
        cout << ele;
    }

}
