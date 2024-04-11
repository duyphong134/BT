#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

int compare(const char* s1, const char* s2){
    int cnt = 0;
    int i = 0;
    int n = strlen(s1);
    int m = strlen(s2);
    while(i != m)
    {
        char tmp[n + 1];
        int pos = 0;
        for(int j = i; j < i + n ; j++){
            tmp[pos]= s2[i];
            pos++;
        }
        int numberOfChar = strcmp(tmp, s1);
        if(numberOfChar == n){
            cnt++;
        }
        i++;
    }
    return cnt;
}


int main()
{
    char s1[] = "Amstrong";
    char s2[] = "AmstrongAmstrongAmstrong";

    int res = compare(s1, s2);
    cout << res << endl;
}
