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

    // sort()�� predictor�� true�� ��ȯ�ϸ� a�� b�� ������ �ű��.
    sort(items.begin(), items.end(), [](const string& a, const string& b) -> bool {
        if (a.size() != b.size()) {
            return a.size() < b.size();
        }

        for (int i = 0; i < a.size(); ++i) {
            if (a[i] != b[i]) {
                return a[i] < b[i];
            }
        }

        return false; // �ߺ�; true�� ��ȯ�ϸ� ���� �߻�.
    });

    str = "";

    for (int i = 0; i < itemCount; ++i) {
        if (str == items[i]) continue; // �ߺ� ����
        cout << items[i] << endl;
        str = items[i];
    }

    return 0;
}