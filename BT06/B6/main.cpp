#include <iostream>
using namespace std;

//B6
int UCLN(int a, int b){
    if(a == 0) return b;
    return UCLN(b % a, a);
}
int main()
{
    int a, b; cin >> a >> b;
    int res = UCLN(a, b);
    cout << res << endl;
}

