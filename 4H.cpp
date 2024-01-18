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
  int min_index = -1;
  int min_sum = -1;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = 0; j < m; j++) {
      sum += a[i][j];
    }
    if (min_sum == -1 || sum < min_sum) {
      min_sum = sum;
      min_index = i+1;
    }
  }
  cout << min_index << endl;
  return 0;
}