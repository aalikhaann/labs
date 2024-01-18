#include <iostream>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;++i) {
        for(int j=0;j<m;++j) {
            cin >> a[i][j];
        }
    }

    int c=0;
    int r=0;
    int sum=0;
    cout << "coordinates of min elements:" << endl;

    while(c<m) {
        int min=a[0][c];
        for(int i=0;i<n;++i) {
            if(min>a[i][c]) {
                min=a[i][c];
                r=i;
            }
        }
        cout << r+1 << ";" << c+1 << endl;
        sum+=a[r][c];
        c++;}
        cout << " " << endl;
        cout << "Their sum:" << endl;
        cout << sum;

        return 0;
    
}