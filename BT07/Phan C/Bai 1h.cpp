#include <iostream>
#include <stdlib.h>
using namespace std;

void trim_right(char a[], int n){
    int i = 0;
    while(a[i] != ' '){
        i++;
    }
    a[i] = '\0';

}

int main()
{
    int n; cin >> n;
    char a[n];
    cin.ignore();
    string s; getline(cin , s);
    for(int i = 0; i < n; i++){
        a[i] = s[i];
    }
    trim_right(a, n);
    for(int i = 0; a[i] != '\0'; i++) cout << a[i];

}
