#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> x = {1, 2, 3, 4};

    int num = 0;

    for (int digit : x) {
        num = num * 10 + digit;
    }

    cout << num;
}