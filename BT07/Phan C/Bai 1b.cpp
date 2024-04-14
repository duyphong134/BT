#include <iostream>
#include <stdlib.h>
using namespace std;

void delete_char(char a[], char c)
{
    int i = 0, j = 0;
    while(a[i] != '\0'){
        if(a[i] != c){
            a[j] = a[i];
            j++;
        }
        i++;
    }
    a[j] = '\0';
}

int main()
{
    int n; cin >> n;
    char a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    char c; cin >> c;
    delete_char(a, c);
    for(int i = 0; a[i] != '\0'; i++){
        cout << a[i];
    }
    cout << endl;
}
