#include <iostream>
#include <stdlib.h>
using namespace std;

void truncate(char a[], int n){
    int i = 0;
    while(i < n){
        i++;
    }
    a[i] = '\0';

}

int main()
{
    int n; cin >> n;
    char a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m; cin >> m;
    truncate(a, m);
    for(int i = 0; a[i] != '\0'; i++) cout << a[i];

}
