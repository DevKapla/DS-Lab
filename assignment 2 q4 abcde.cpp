#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[100] = "Hello ";
    char s2[100] = "World";
    strcat(s1, s2);
    cout << s1;
    return 0;
}





#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[100] = "hello";
    int n = strlen(s);
    for (int i = 0; i < n/2; i++) {
        char temp = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = temp;
    }
    cout << s;
    return 0;
}




#include <iostream>
using namespace std;

int main() {
    char s[100] = "hello world";
    char t[100];
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c!='a' && c!='e' && c!='i' && c!='o' && c!='u' &&
            c!='A' && c!='E' && c!='I' && c!='O' && c!='U') {
            t[j++] = c;
        }
    }
    t[j] = '\0';
    cout << t;
    return 0;
}
  



#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char arr[5][100] = {"banana", "apple", "mango", "cherry", "grape"};
    char temp[100];
    for (int i = 0; i < 5-1; i++) {
        for (int j = i+1; j < 5; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}






#include <iostream>
using namespace std;

int main() {
    char s[100] = "HELLO World";
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
    cout << s;
    return 0;
}
