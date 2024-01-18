#include <iostream>

using namespace std;

int main() {
    int n,k;
    int l=0;
    cin >> n >> k;
    int a[n][k];
    for(int i=0;i<n;++i) {
        for(int j=0;j<k;++j) {
            cin >> a[i][j];
            if(a[i][j]<0) {
                l=l+1;
            }
        }
    }
    cout << l;

    return 0;
}