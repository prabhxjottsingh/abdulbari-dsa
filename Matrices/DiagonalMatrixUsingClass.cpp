#include <bits/stdc++.h>
using namespace std;

class Diagonal
{
private:
    int size;
    int *A;

public:
    Diagonal(int size)
    {
        this->size = size;
        A = new int[size];
    }

    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
    ~Diagonal()
    {
        delete[] A;
    }
};

void Diagonal::Set(int i, int j, int x)
{
    if (i == j)
        A[i] = x;
}

int Diagonal::Get(int i, int j)
{
    if (i == j)
        return A[i];
    return 0;
}

void Diagonal::Display()
{
    cout << "The matrix you have entered is: ";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << Get(i, j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    Diagonal M(size);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int x;
            cin >> x;
            M.Set(i, j, x);
        }
    }
    M.Display();
    return 0;
}