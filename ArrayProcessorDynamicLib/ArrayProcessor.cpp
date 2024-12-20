#include "ArrayProcessor.h"
#include <algorithm>
#include <cmath>

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

double ArrayProcessor::calculateGeometricMean(int arr[], int size) {
    double product = 1.0;
    for (int i = 0; i < size; ++i) {
        // Обработка отрицательных чисел
        if (arr[i] < 0) {
            return -1.0; // Возвращаем -1 для отрицательных чисел
        }
        product *= arr[i];
    }
    return std::pow(product, 1.0 / size);
}
