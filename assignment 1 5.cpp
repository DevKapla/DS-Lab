#include <iostream>
using namespace std;

int main() {
    int a[10][10], m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++)
            sum += a[i][j];
        cout << "Row " << i+1 << " sum = " << sum << endl;
    }
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < m; i++)
            sum += a[i][j];
        cout << "Column " << j+1 << " sum = " << sum << endl;
    }
}