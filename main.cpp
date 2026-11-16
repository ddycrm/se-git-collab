#include <iostream>
#include "score.h"
int main() {
    int scores[] = {85, 92, 78, 90, 88};
    int n = 5, passCount = 0;
    for (int i = 0; i < n; ++i) if (scores[i] >= 60) ++passCount;
    std::cout << "[Score Summary] Avg: " << calcAverage(scores, n)
              << ", Max: " << calcMax(scores, n)
              << ", Min: " << calcMin(scores, n)
              << ", Pass: " << passCount << std::endl;
    return 0;
}
