#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  int row_sum[n];
  for (int i = 0; i < n; i++) {
    row_sum[i] = 0;
  }
  int col_sum[m];
  for (int j = 0; j < m; j++) {
    col_sum[j] = 0;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      row_sum[i] += a[i][j];
      col_sum[j] += a[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    cout << "The sum of row number " << i + 1 << " is " << row_sum[i] << "\n";
  }
  for (int j = 0; j < m; j++) {
    cout << "The sum of column number " << j + 1 << " is " << col_sum[j] << "\n";
  }
  
  return 0;
}