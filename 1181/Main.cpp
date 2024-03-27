#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<string> items;
    int itemCount;
    string str;

    cin >> itemCount;

    for (int i = 0; i < itemCount; ++i) {
        cin >> str;
        items.push_back(str);
    }

    // sort()는 predictor가 true를 반환하면 a를 b의 앞으로 옮긴다.
    sort(items.begin(), items.end(), [](const string& a, const string& b) -> bool {
        if (a.size() != b.size()) {
            return a.size() < b.size();
        }

        for (int i = 0; i < a.size(); ++i) {
            if (a[i] != b[i]) {
                return a[i] < b[i];
            }
        }

        return false; // 중복; true를 반환하면 오류 발생.
    });

    str = "";

    for (int i = 0; i < itemCount; ++i) {
        if (str == items[i]) continue; // 중복 제거
        cout << items[i] << endl;
        str = items[i];
    }

    return 0;
}