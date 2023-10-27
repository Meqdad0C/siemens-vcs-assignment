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

double getAverage(vector<int> vec) {
    double sum = getSum(vec);
    double avg = sum / vec.size();
    return avg;
}

int main() {
    vector<int> myVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = getSum(myVec);
    double avg = getAverage(myVec);
    cout << "The sum of the elements in the vector is: " << sum << endl;
    cout << "The average of the elements in the vector is: " << avg << endl;
    return 0;
}