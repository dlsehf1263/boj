#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPalindrome(const string& str) {
    int checkCount = str.size() / 2;

    for (int i = 0; i < checkCount; ++i) {
        if (str[i] != str[str.size() - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<string> strs;
    string str;

    while (true) {
        cin >> str;
        if (str == "0") break;
        cout << (isPalindrome(str) ? "yes" : "no") << endl;
    }

    return 0;
}