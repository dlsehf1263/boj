#include <iostream>
#include <string>

using namespace std;

// 출력 시간도 최적화해야 하는 줄 알았는데..

int main() {
    const int MAX_VALUE = 10000;
    int* counts = new int[MAX_VALUE];

    for (int i = 0; i < MAX_VALUE; ++i) counts[i] = 0;

    int inputCount;
    int temp;

    cin >> inputCount;

    for (int i = 0; i < inputCount; ++i) {
        cin >> temp;
        ++counts[temp - 1];
    }

    for (int i = 0; i < MAX_VALUE; ++i) {
        for (int j = 0; j < counts[i]; ++j) {
            cout << i + 1;
        }

    }

    delete[] counts;

    return 0;
}