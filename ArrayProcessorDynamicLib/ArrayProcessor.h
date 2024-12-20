#pragma once

#ifdef ARRAYPROCESSORDYNAMICLIB_EXPORTS
#define ARRAYPROCESSORDYNAMICLIB_API __declspec(dllexport)
#else
#define ARRAYPROCESSORDYNAMICLIB_API __declspec(dllimport)
#endif

class ArrayProcessor {
public:
    ARRAYPROCESSORDYNAMICLIB_API void sortArray(int arr[], int size);
    ARRAYPROCESSORDYNAMICLIB_API int findElement(int arr[], int size, int element);
    ARRAYPROCESSORDYNAMICLIB_API double calculateAverage(int arr[], int size);
};
