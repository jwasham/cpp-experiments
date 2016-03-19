// Sums the indices of an vector of length N

#include <iostream>
#include <vector>

using namespace std;

const int N = 40;

// stores result in p: the sum of the values of vector d of length n
inline void sum(int& p, int n, vector<int> d) { p = 0; for (int i = 0; i < n; i++) { p += d.at(i); } }

int main()
{
    int accum = 0;
    vector<int> data(N);

    for (int i = 0; i < N; i++) {
        data.at(i) = i;
    }

    sum(accum, N, data);

    cout << "sum is " << accum << endl;

    return 0;
}