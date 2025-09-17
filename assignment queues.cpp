1st question 
#include <iostream>
using namespace std;

int queue[100];
int n = 100;
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (rear == n - 1) {
        cout << "Queue is Full" << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = x;
        cout << x << " inserted" << endl;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << queue[front] << " deleted" << endl;
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty" << endl;
    } else {
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

void peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Front element: " << queue[front] << endl;
    }
}

bool isEmpty() {
    return (front == -1 || front > rear);
}

bool isFull() {
    return (rear == n - 1);
}

int main() {
    int choice, x;
    while (1) {
        cout << "1.Enqueue 2.Dequeue 3.Display 4.Peek 5.isEmpty 6.isFull 7.Exit" << endl;
        cin >> choice;
        if (choice == 1) {
            cin >> x;
            enqueue(x);
        } else if (choice == 2) {
            dequeue();
        } else if (choice == 3) {
            display();
        } else if (choice == 4) {
            peek();
        } else if (choice == 5) {
            if (isEmpty()) cout << "Queue is Empty" << endl;
            else cout << "Queue is not Empty" << endl;
        } else if (choice == 6) {
            if (isFull()) cout << "Queue is Full" << endl;
            else cout << "Queue is not Full" << endl;
        } else if (choice == 7) {
            break;
        } else {
            cout << "Invalid Choice" << endl;
        }
    }
    return 0;
}







2nd question




#include <iostream>
using namespace std;

int queue[100];
int n = 100;
int front = -1;
int rear = -1;

void enqueue(int x) {
    if ((front == 0 && rear == n - 1) || (rear + 1) % n == front) {
        cout << "Queue is Full" << endl;
    } else {
        if (front == -1) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % n;
        }
        queue[rear] = x;
        cout << x << " inserted" << endl;
    }
}

void dequeue() {
    if (front == -1) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << queue[front] << " deleted" << endl;
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % n;
        }
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is Empty" << endl;
    } else {
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % n;
        }
        cout << endl;
    }
}

void peek() {
    if (front == -1) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Front element: " << queue[front] << endl;
    }
}

bool isEmpty() {
    return (front == -1);
}

bool isFull() {
    return ((front == 0 && rear == n - 1) || (rear + 1) % n == front);
}

int main() {
    int choice, x;
    while (1) {
        cout << "1.Enqueue 2.Dequeue 3.Display 4.Peek 5.isEmpty 6.isFull 7.Exit" << endl;
        cin >> choice;
        if (choice == 1) {
            cin >> x;
            enqueue(x);
        } else if (choice == 2) {
            dequeue();
        } else if (choice == 3) {
            display();
        } else if (choice == 4) {
            peek();
        } else if (choice == 5) {
            if (isEmpty()) cout << "Queue is Empty" << endl;
            else cout << "Queue is not Empty" << endl;
        } else if (choice == 6) {
            if (isFull()) cout << "Queue is Full" << endl;
            else cout << "Queue is not Full" << endl;
        } else if (choice == 7) {
            break;
        } else {
            cout << "Invalid Choice" << endl;
        }
    }
    return 0;
}
  







3 question queues




#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m = n / 2;
    int firstHalf[50], secondHalf[50];
    for (int i = 0; i < m; i++) {
        firstHalf[i] = arr[i];
    }
    for (int i = 0; i < m; i++) {
        secondHalf[i] = arr[i + m];
    }

    int result[100], k = 0;
    for (int i = 0; i < m; i++) {
        result[k++] = firstHalf[i];
        result[k++] = secondHalf[i];
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}








4 th question queue
  

#include <iostream>
#include <queue>
using namespace std;

int main() {
    char ch;
    int freq[256] = {0};
    queue<char> q;

    while (cin >> ch) {
        freq[ch]++;
        q.push(ch);

        while (!q.empty() && freq[q.front()] > 1) {
            q.pop();
        }

        if (!q.empty())
            cout << q.front() << " ";
        else
            cout << -1 << " ";
    }

    return 0;
}
  


QUESTION 5 QUEUES  a
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q1, q2;
    int x;

    q1.push(1);
    q1.push(2);
    q1.push(3);

    // push 4
    x = 4;
    q2.push(x);
    while(!q1.empty()) {
        q2.push(q1.front());
        q1.pop();
    }
    swap(q1, q2);

    // top
    if(!q1.empty()) cout << q1.front() << endl;

    // pop
    if(!q1.empty()) q1.pop();

    // top again
    if(!q1.empty()) cout << q1.front() << endl;

    return 0;
}
  

queues question 5 b 
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int x;

    q.push(1);
    q.push(2);
    q.push(3);

    // push 4
    x = 4;
    int n = q.size();
    q.push(x);
    for(int i = 0; i < n; i++) {
        q.push(q.front());
        q.pop();
    }

    // top
    if(!q.empty()) cout << q.front() << endl;

    // pop
    if(!q.empty()) q.pop();

    // top again
    if(!q.empty()) cout << q.front() << endl;

    return 0;
}





