// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to push the elements from
// one stack element into another stack
void pushElements(stack<int> s1, stack<int> s2, int len)
{
    int i = 1;
    while (i <= len)
    {

        // Update the stack
        if (s1.size() > 0)
        {
            s2.push(s1.top());
            s1.pop();
        }

        // Increment i
        i++;
    }
}

// Function to compare two given stacks
string compareStacks(stack<int> s1, stack<int> s2)
{
    // Stores the size of S1 stack
    int N = s1.size();

    // Stores the size of S2 stack
    int M = s2.size();

    // If N is not equal to M
    if (N != M)
    {
        return "No";
    }

    // Traverse the range [1, N]
    for (int i = 1; i <= N; i++)
    {

        // Push N-i elements to stack
        // S2 from stack S1
        pushElements(s1, s2, N - i);

        // Stores the top value of S1
        int val = s1.top();

        // Pushes the 2 * (N-i)
        // elements from S2 to S1
        pushElements(s2, s1, 2 * (N - i));

        // If val is not equal
        // to the top of S2
        if (val != s2.top())
            return "No";

        // Restores the stacks
        pushElements(s1, s2, N - i);
    }

    // Return
    return "Yes";
}

// Driver Code
int main()
{
    stack<int> S1, S2;

    S1.push(1);
    S1.push(2);
    S1.push(4);
    S1.push(3);

    S2.push(1);
    S2.push(2);
    S2.push(4);
    S2.push(3);

    cout << (compareStacks(S1, S2));
}

// This code is contributed by ukassp.
