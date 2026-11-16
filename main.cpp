#include <iostream>
#include "score.h"
int main() {
    int scores[] = {85, 92, 78, 90, 88};
    int n = 5;
    std::cout << "Avg=" << calcAverage(scores, n)
              << ", Max=" << calcMax(scores, n)
              << ", Min=" << calcMin(scores, n) << std::endl;
    return 0;
}
