#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int main() {
    const int DES_X = 8, DES_Y = 8;

    int w, h;
    vector<string> input;

    FILE* f = fopen("input.txt", "r");
    fscanf(f, "%d %d\n", &h, &w);
    for (int i = 0; i < h; ++i) {
        char str[256];
        fgets(str, 256, f);
        if (str[strlen(str) - 1] == '\n') str[strlen(str) - 1] = NULL;
        input.push_back(str);
    }
    /*cin >> w >> h;

    for (int i = 0; i < h; ++i) {
        string s;
        cin >> s;
        input.push_back(s);
    }*/

    int minFill = w*h;

    for (int sy = 0; sy < h - DES_Y + 1; ++sy) {
        for (int sx = 0; sx < w - DES_X + 1; ++sx) {

            for (int i = 0; i < 2; ++i) {
                char firstColor = i == 0 ? 'W' : 'B';
                int fillCount = 0;

                for (int y = 0; y < DES_Y; ++y) {
                    for (int x = 0; x < DES_X; ++x) {
                        char color = input[sy + y][sx + x];
                        char targetColor = x % 2 + y % 2 == 1 ? (firstColor == 'W' ? 'B' : 'W') : firstColor;
                        // 0 1 0 1
                        // 1 2 1 2

                        if (color != targetColor) fillCount++;
                    }
                }

                if (minFill > fillCount) minFill = fillCount;
            }
        }
    }

    cout << minFill;
    return 0;
}