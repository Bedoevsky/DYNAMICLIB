#include "ArrayProcessor.h"
#include <algorithm>

void ArrayProcessor::sortArray(int arr[], int size) {
    std::sort(arr, arr + size);
}

int ArrayProcessor::findElement(int arr[], int size, int element) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

double ArrayProcessor::calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}
