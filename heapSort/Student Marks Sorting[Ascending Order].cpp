/*
Input Data:
5
Yashwant 93
Ashish 34
Mayank 42
Mayur 76
Hemant 98

leftChild < rootChild, rightChild > rootChild
heapify the tree after every instruction

*/

#include<bits/stdc++.h>
using namespace std;

class StudentInfo{
private:
    string name;
    int marks;
public:

    init(string nm, int mrks){
        name = nm;
        marks = mrks;
    }

    string getName(){
        return name;
    }

    int getMarks(){
        return marks;
    }

};

void heapify(StudentInfo arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left].getMarks() > arr[largest].getMarks())
        largest = left;

    if (right < n && arr[right].getMarks() > arr[largest].getMarks())
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(StudentInfo arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main(){
    int n;
    cin >> n;
    StudentInfo st[n];
    for(int i = 0; i < n; i++){
        string name;
        cin >> name;
        int marks;
        cin >> marks;
        st[i].init(name, marks);
    }
    for(int i = 0; i < n; i++){
        cout << st[i].getName() << " -> " << st[i].getMarks() << endl;
    }
    heapSort(st, n);
    cout << "After applying heap Sort: " << endl;
    for(int i = 0; i < n; i++){
        cout << st[i].getName() << " -> " << st[i].getMarks() << endl;
    }
}
