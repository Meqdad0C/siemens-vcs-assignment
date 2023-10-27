#include <iostream>
#include <vector>

using namespace std;

int getSum(vector<int> vec) {
    int sum = 0;
    for (int &i : vec) {
        sum += i;
    }
    return sum;
}

int main() {
    vector<int> myVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = getSum(myVec);
    cout << "The sum of the elements in the vector is: " << sum << endl;
    return 0;
}