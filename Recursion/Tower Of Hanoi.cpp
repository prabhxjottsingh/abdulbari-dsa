#include <iostream>
using namespace std;

void toh(int n, char source, char helper, char destination)
{
    if (n > 0)
    {
        toh(n - 1, source, destination, helper);
        cout << "Disk " << n << " is moved from: " << source << " to " << destination << endl;
        toh(n - 1, helper, source, destination);
    }
}

int main()
{
    int n = 3;
    char a = 'A', b = 'B', c = 'C';
    toh(n, a, b, c);
    return 0;
}