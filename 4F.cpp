#include <iostream>

using namespace std;

int main() {
    int n;
    int k=0, l=0;
    cin >> n;
    int a[n][n];
    int max=-999999;
    for(int i=0;i<n;++i) {
        for(int j=0;j<n;++j) {
            cin >> a[i][j];
            if(a[i][j]>max) {
                max=a[i][j];
                k=i+1;
                l=j+1;
            }
        }
    }
    cout << k << " " << l;

    return 0;
}