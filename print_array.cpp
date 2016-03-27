#include <iostream>

using namespace std;

template <class T>
void display(const T arr[], int size)
{
    int i;

    for (i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }

    cout << "\n";
}

int main()
{
    int intArray[] = {1, 3, 6, 12};
    double dblArray[] = {1.1, 2.4, 6.24, 0.4};

    cout << "Array elements: " << endl;

    display(intArray, 4);
    display(dblArray, 4);

    return 0;
}