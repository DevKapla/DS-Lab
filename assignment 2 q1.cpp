#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100]; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x;
    cin >> x;

    int l = 0, r = n - 1, ans = -1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) {
            ans = m;
            break;
        } else if (a[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    if (ans == -1)
        cout << "not found";
    else
        cout << "found at index " << ans;

    return 0;
}
