#include <iostream>
using namespace std;
int main() {
    int n = 4;
    int d[4] = {1, 2, 3, 4};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << d[i] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}





#include <iostream>
using namespace std;
int main() {
    int n = 4;
    int lower[3] = {1, 4, 7};   // a21, a32, a43
    int diag[4]  = {2, 5, 8, 11}; // a11, a22, a33, a44
    int upper[3] = {3, 6, 9};   // a12, a23, a34
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << diag[i] << " ";
            else if (i == j+1) cout << lower[j] << " ";
            else if (j == i+1) cout << upper[i] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}



#include <iostream>
using namespace std;
int main() {
    int n = 4;
    int a[10] = {1,2,3,4,5,6,7,8,9,10}; 
    int k = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) {
                cout << a[k] << " ";
                k++;
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}



#include <iostream>
using namespace std;
int main() {
    int n = 4;
    int a[10] = {1,2,3,4,5,6,7,8,9,10}; 
    int k = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                cout << a[k] << " ";
                k++;
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}



#include <iostream>
using namespace std;
int main() {
    int n = 4;
    int a[10] = {1,2,3,4,5,6,7,8,9,10}; 
    int k = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << a[k] << " ";
            k++;
        }
    }
    cout << endl;

    k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) cout << a[k++] << " ";
            else cout << a[j*(j+1)/2 + i] << " ";
        }
        cout << endl;
    }
}
