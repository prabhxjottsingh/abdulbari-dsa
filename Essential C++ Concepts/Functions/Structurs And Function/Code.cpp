#include <bits/stdc++.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

void initialize(struct rectangle *r, int length, int breadth)
{
    r->length = length;
    r->breadth = breadth;
}

void changeLength(struct rectangle *r, int newLength)
{
    r->length = newLength;
}

void changeBreadth(struct rectangle *r, int newBreadth)
{
    r->breadth = newBreadth;
}

void area(struct rectangle rec)
{
    cout << "Area of the rectangle with length(" << rec.length << ") and breadth(" << rec.breadth << ") is: " << rec.length * rec.breadth << endl;
}

int main()
{
    struct rectangle rec;
    initialize(&rec, 10, 30);
    area(rec);
    changeLength(&rec, 20);
    area(rec);
    changeBreadth(&rec, 20);
    area(rec);
    return 0;
}