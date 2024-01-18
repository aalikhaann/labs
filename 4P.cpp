#include <iostream>

using namespace std;

int main() {
    int n;
    int k=0, sum=0;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;++i) {
        for(int j=0;j<n;++j) {
            cin >> a[i][j];
            if(i+j==n-1) {
                k+=a[i][j];
            }
        }
    }
    cout << k;

    return 0;
}