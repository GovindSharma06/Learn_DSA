
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marks = {78, 85, 92, 67, 88};

    cout << marks[0] << endl;
    cout << marks[2] << endl;


    marks[2] = 95;

    for (int mark : marks) {
    cout << mark << " ";
}
    // This operation takes \(O(1)\) time because accessing or updating an element at a known index is constant-time for Python lists and C++ vectors.

    return 0;
}
