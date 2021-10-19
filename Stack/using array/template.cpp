#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s;
};

int main()
{
    Stack st;
    cout << "Enter the size of the stack/array: ";
    cin >> st.size;
    st.s = new int[st.size];
    st.top = -1;
}

// top == -1, stack is empty
// top == size-1, stack is full