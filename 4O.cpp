#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    int max = -9999999;
    int k = 0, l = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                if(a[i][j]>max){
                    max = a[i][j];
                    k = i+1;
                    l = j+1;
                }
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " <<  k << ";" << l;
    return 0;
}