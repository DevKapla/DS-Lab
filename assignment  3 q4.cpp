#include <iostream>
#include <stack>
#include <string>
using namespace std;

int prec(char c) {
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}

int main() {
    string infix, postfix = "";
    stack<char> st;

    cin >> infix;

    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        }
        else if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while (!st.empty() && prec(st.top()) >= prec(c)) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    cout << postfix << endl;
    return 0;
}
