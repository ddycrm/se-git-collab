#include "score.h"
double calcAverage(const int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) sum += arr[i];
    return static_cast<double>(sum) / n;
}
int calcMax(const int arr[], int n) {
    int m = arr[0];
    for (int i = 1; i < n; ++i) if (arr[i] > m) m = arr[i];
    return m;
}
