#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack<int> &st, int x) {
    if (st.empty()) {
        st.push(x);
        return;
    }
    int topElement = st.top();
    st.pop();
    insertAtBottom(st, x);
    st.push(topElement);
}
void reverseStack(stack<int> &st) {
    if (st.empty()) return;

    int topElement = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, topElement);
}

void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;
    int n, x;
    cout << "Enter number of elements in stack: ";
    cin >> n;

    cout << "Enter elements of stack: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        st.push(x);
    }

    cout << "Original stack (top to bottom): ";
    printStack(st);
    for (int i = 0; i < n; i++) {
        st.push(x);
    }

    reverseStack(st);

    cout << "Reversed stack (top to bottom): ";
    printStack(st);

    return 0;
}

