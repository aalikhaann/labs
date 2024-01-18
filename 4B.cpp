#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    int max=0, max_sec=0;
    for(int i=0;i<n;++i) {
        for(int j=0;j<n;++j) {
            cin >> a[i][j];
            if(a[i][j]>max) {
                max_sec=max;
                max=a[i][j];
            }
            else if(a[i][j]>max_sec and a[i][j]<max) {
                max_sec=a[i][j];
            }
            else if(a[i][j]==a[i+1][j+1]) {
                a[i][j]=max_sec;
            }
        }
    }
    cout << max_sec;
    return 0;
}