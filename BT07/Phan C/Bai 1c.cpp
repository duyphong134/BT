#include <iostream>
#include <stdlib.h>
using namespace std;


void pad_right(char a[], int n)
{
    int i = 0;
    while(a[i] != '\0'){
        i++;
    }
    while(i < n){
        a[i] = '_';
        i++;
    }
    a[i] = '\0';
}

int main()
{
    int m; cin >> m;
    char a[m];
    for(int i = 0; i < m; i++) cin >> a[i];
    int n; cin >> n;
    pad_right(a, n);
    for(int i = 0; a[i] != '\0'; i++) cout << a[i];
}
