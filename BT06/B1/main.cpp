#include <array>
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

//B1
bool check(char **a, int m, int n)
{
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != 'X'){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int m, n, k;
    cin >> m >> n >> k;
    char **a = new char *[m];
    srand(time(nullptr));
    for(int i = 0; i < m; i++){
        a[i] = new char[n];
        for(int j = 0; j < n; j++){
            int x = rand() % 2;
            a[i][j] = char(x + '0');
        }
    }
    char arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = 'X';
        }
    }
    char arr2[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == '0'){
                    int cnt = 0;
                for(int it1 = i - 1; it1 < i + 1 && it1 < m; it1++){
                    for(int it2 = j - 1; it2 < j + 1 && it2 < n; it2++){
                        if(a[it1][it2] == '1'){
                            cnt++;
                        }
                    }
                }
                arr2[i][j] = char(cnt + '0');
            }
        }
    }
    while(check(a, m, n))
    {
        int p, q; cin >> p >> q;
        if(a[p][q] == '1'){
            cout << "You are dead" << endl;
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
            return 0;
        }else{
            cout << arr2[p][q] << endl;
        }
    }

    cout << "Games has ended" << endl;

}

