#include <iostream>
#include <stdlib.h>
using namespace std;


 pad_left(char a[], int n, int m)
{
    char a2[m];
    for(int i = 0; i < m; i++) a2[i] = a[i];
    int i = 0;
    while(i < n - m){
        a[i] = '_';
        i++;
    }
    int j = 0;
    while(i < n){
        a[i] = a2[j];
        i++;
        j++;
    }
    a[i] = '\0';
}

int main()
{
    int m; cin >> m;
    char a[m];
    for(int i = 0; i < m; i++) cin >> a[i];
    int n; cin >> n;
    pad_left(a, n, m);
    for(int i = 0; a[i] != '\0'; i++) cout << a[i];
}
