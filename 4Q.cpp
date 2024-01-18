#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][2*n-1];
    for(int i=0;i<n;++i) {
        for(int j=0;j<2*n-1;++j) {
            if(i+j<n-1 or j-i>=n) {
                cout << ".";
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}