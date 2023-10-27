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

int getMin(vector<int> vec) {
    int min = vec[0];
    for (int &i : vec) {
        if (i < min) {
            min = i;
        }
    }
    return min;
}

int main() {
    vector<int> myVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = getSum(myVec);
    int min = getMin(myVec);
    cout << "The sum of the elements in the vector is: " << sum << endl;
    cout << "The minimum element in the vector is: " << min << endl;
    return 0;
}