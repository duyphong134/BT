#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void f(int arr[])
{
    cout << sizeof(arr) << endl;
}
void f2(int arr[1000])
{
    cout << sizeof(arr) << endl;
}
int main()
{
    const int maxN = 1000;
    int arr[1000];
    cout << sizeof(arr) << endl;
    f(arr);
    f2(arr);
}
