#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 5, 6};
    int n = 6;

    int low = 0, high = n - 2, missing = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == mid + 1) {
            low = mid + 1;
        } else {
            missing = mid + 1;
            high = mid - 1;
        }
    }

    cout << "Missing number is " << missing;
    return 0;
}
