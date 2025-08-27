#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string expr) {
    stack<char> s;

    for (char c : expr) {
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (s.empty()) return false;

            char top = s.top();
            s.pop();

            if (c == ')' && top != '(') return false;
            if (c == '}' && top != '{') return false;
            if (c == ']' && top != '[') return false;
        }
    }

    return s.empty();
}

int main() {
    string expr;
    cin >> expr;

    if (isBalanced(expr))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    return 0;
}
