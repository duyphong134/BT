#include <bits/stdc++.h>
using namespace std;


// Bai 1

int main()
{
    int n; cin >> n;
    vector<bool> v(1000, 0);
    int x;
    while(cin >> x){
        if(v[x] == false) v[x] = true;
        else{
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

}

//BAI 2

int main()
{
    string s; cin >> s;
    int m = s.size();
    for(int i = 0; i < m / 2; i++){
        if(s[i] != s[m - i - 1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}

//BAI 3


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        for(int n = a; n <= b; n++){
            vector<int> v;
            int k = n;
            while(k > 0){
                v.push_back(k % 10);
                k /= 10;
            }
            int m = v.size();
            bool ok = true;
            for(int i = 0; i < m/2; i++){
                if(v[i] != v[m - i - 1]){
                    ok = false;
                    break;
                }
            }
            if(ok) cout << n << " ";
        }
    }

}


//BAI 4

int main()
{
    int m, n; cin >> m >> n;
    char arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int res;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] != '*')
            {
                res = 0;
                for(int a = i - 1; a <= i + 1 && (a<= m - 1 && a >= 0); a++){
                    for(int b = j - 1; b <= j+1 && (b <= n - 1 && b >= 0); b++){
                        if(arr[a][b] == '*') res++;
                    }
                }
                arr[i][j] = char(res + '0');
            }
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


//Bai 5(first try)

int main()
{
    int x, y; cin >> x >> y;
    int k = 1;
    int i, j;
    int a[x][y] = {0};
    for(j = 0; j < y; j++){
        a[0][j] = k;
        k++;
    }
    for(i = 1; i < x; i++){
        a[i][y-1] = k;
        k++;
    }
    for(j = y-2; j >= 0; j--){
        a[x-1][j] =k;
        k++;
    }
    for(i = x - 2; i > 0; i--){
        a[i][0] = k;
        k++;
    }
    for(j = 1; j < y - 1; j++){
        a[1][j] = k;
        k++;
    }
    for(j = y - 2; j >= 1; j--){
        a[x - 2][j] = k;
        k++;
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}

// Bai 5(second attempt)

int main()
{
    int x, y; cin >> x >> y;
    int colEnd = y - 1, rowEnd = x - 1;
    int colBegin = 0, rowBegin = 0;
    int arr[x][y];
    int k = 1;
    while(rowBegin <= rowEnd && colBegin <= colEnd){
        for(int j = colBegin; j <= colEnd; j++){
            arr[rowBegin][j] = k;
            k++;
        }

        rowBegin++;
        for(int i = rowBegin; i <= rowEnd; i++){
            arr[i][colEnd] = k;
            k++;
        }

        colEnd--;

        for(int j = colEnd; j >= colBegin; j--){
            arr[rowEnd][j] = k;
            k++;
        }

        rowEnd --;

        for(int i = rowEnd; i >= rowBegin; i--){
            arr[i][colBegin] = k;
            k++;
        }
        colBegin++;


    }

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

//Bai 6


int main()
{
    int n; cin >> n;
    vector<vector<int>> arr(n, vector<int> (n, 0));
    int k = 1;
    int a = 0, b = n / 2;
    while(k < n*n){
        arr[a][b] = k;
        k++;
        int new_a = (a - 1 + n) % n;
        int new_b = (b + 1) % n;
        if(arr[new_a][new_b] != 0){
            a = (a + 1) % n;
        }else{
            a = new_a;
            b = new_b;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}



//Bai 7

const char alphabet[26][8][7] = {
    {
        {"  #  "},
        {" # # "},
        {"#   #"},
        {"#####"},
        {"#   #"},
        {"#   #"}
    },
    {
        {"#### "},
        {"#   #"},
        {"#   #"},
        {"#### "},
        {"#   #"},
        {"#### "}
    },
    {
        {"#####"},
        {"#    "},
        {"#    "},
        {"#    "},
        {"#    "},
        {"#####"}
    },
    {
        {"#### "},
        {"#   #"},
        {"#   #"},
        {"#   #"},
        {"#   #"},
        {"#### "}
    },
    {
        {"#####"},
        {"#    "},
        {"#    "},
        {"#####"},
        {"#    "},
        {"#####"}
    },
    {
        {"#####"},
        {"#    "},
        {"#    "},
        {"#####"},
        {"#    "},
        {"#    "}
    },
    {
        {"#####"},
        {"#    "},
        {"#  ##"},
        {"#   #"},
        {"#   #"},
        {"#####"}
    },
    {
        {"#   #"},
        {"#   #"},
        {"#####"},
        {"#   #"},
        {"#   #"},
        {"#   #"}
    },
    {
        {"#####"},
        {"  #  "},
        {"  #  "},
        {"  #  "},
        {"  #  "},
        {"#####"}
    },
    {
        {"#####"},
        {"   # "},
        {"   # "},
        {"   # "},
        {"#  # "},
        {" ##  "}
    },
    {
        {"#    #"},
        {"#   # "},
        {"#  #  "},
        {"###   "},
        {"#  #  "},
        {"#   # "}
    },
    {
        {"#   "},
        {"#   "},
        {"#   "},
        {"#   "},
        {"#   "},
        {"####"}
    },
    {
        {"#    #"},
        {"##  ##"},
        {"# ## #"},
        {"#    #"},
        {"#    #"},
        {"#    #"}
    },
    {
        {"#   #"},
        {"##  #"},
        {"# # #"},
        {"#  ##"},
        {"#   #"},
        {"#   #"}
    },
    {
        {"#####"},
        {"#   #"},
        {"#   #"},
        {"#   #"},
        {"#   #"},
        {"#####"}
    },
    {
        {"#####"},
        {"#   #"},
        {"#####"},
        {"#    "},
        {"#    "},
        {"#    "}
    },
    {
        {"#### "},
        {"#  #"},
        {"#  #"},
        {"# ##"},
        {"#  #"},
        {"##### "}
    },
    {
        {"#####"},
        {"#   #"},
        {"#####"},
        {"# #  "},
        {"#  # "},
        {"#   #"}
    },
    {
        {"#####"},
        {"#    "},
        {"#    "},
        {"#####"},
        {"    #"},
        {"#####"}
    },
    {
        {"#####"},
        {"  #  "},
        {"  #  "},
        {"  #  "},
        {"  #  "},
        {"  #  "}
    },
    {
        {"#   #"},
        {"#   #"},
        {"#   #"},
        {"#   #"},
        {"#   #"},
        {"#####"}
    },
    {
        {"#   #"},
        {"#   #"},
        {"#   #"},
        {"#   #"},
        {" # # "},
        {"  #  "}
    },
    {
        {"#    #"},
        {"#    #"},
        {"#    #"},
        {"# ## #"},
        {"##  ##"},
        {"#    #"}
    },
    {
        {"#    #"},
        {"#    #"},
        {" #  # "},
        {"  ##  "},
        {" #  # "},
        {"#    #"}
    },
    {
        {"#    #"},
        {"#    #"},
        {"#    #"},
        {" ####"},
        {"  #   "},
        {" #   "}
    },
    {
        {"#####"},
        {"   # "},
        {"  #  "},
        {" #   "},
        {"#    "},
        {"#####"}
    }

};
int main()
{
    string s; getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        s[i] = toupper(s[i]);
        int pos = int(s[i] - 'A');
        for(int a = 0; a < 6; a++){
            for(int b = 0; b < 7; b++){
                cout << alphabet[pos][a][b];
            }
            cout << endl;
        }
    }



}

//Bai 8

int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int new_arr[n];
    for(int i = 0; i < n; i++){
        new_arr[i] = arr[i];
    }
    sort(new_arr, new_arr + n);
    int it = 0;
    while(it < n){
        int pos;
        for(int i = 0; i < n; i++){
                if(arr[i] == new_arr[it]){
                    pos = i;
                    break;
                }
        }
        arr[pos] = 999;
        cout << pos << " ";
        it++;
    }
    cout << endl;
    int sum = 0;
    for(int i = 0; i < n - 1; i++){
        sum += new_arr[i];
    }
    cout << sum;


}
