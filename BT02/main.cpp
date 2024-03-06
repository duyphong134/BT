BAI1
#include <iostream>

using namespace std;

bool isPrime(int n){
    if(n < 0) return false;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;  cin >> n;
    if(isPrime(n)){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
}

BAI2
#include <iostream>

using namespace std;
int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
                cout << " ";
        }
        for(int j = n; j > i; j--){
            cout << "*";
        }
        cout << endl;
    }

}

BAI6
#include <iostream>
#include <array>

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cout << a[i][j] << endl;
}


BAI7
#include <iostream>
using namespace std;

int main(){
    int x, y = -99;
    while(true){
        if(x < 0) break;
        cin >> x;
        if(y != x){
            cout << x << " ";
        }
        y = x;

    }

}

BAI8
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    set<string> stringSet;

    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < s.length(); j++) {
            if (j != i) {
                string s1;
                for (int pos = 0; pos < s.length(); pos++) {
                    if (pos != i && pos != j) {
                        s1 += s[pos];
                    }
                }
                stringSet.insert(s1);
            }
        }
    }
    cout << stringSet.size() << endl;
    return 0;
}
