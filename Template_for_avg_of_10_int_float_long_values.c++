#include <iostream>

template <typename T>
T computeAverage(const T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / static_cast<T>(size);
}

int main() {
     
    int intArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Average of 10 integers: " << computeAverage(intArray, 10) << std::endl;
    float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};
    std::cout << "Average of 10 floats: " << computeAverage(floatArray, 10) << std::endl;
    long longArray[] = {1000000000, 2000000000, 3000000000, 4000000000, 5000000000, 6000000000, 7000000000, 8000000000, 9000000000, 10000000000};
    std::cout << "Average of 10 long values: " << computeAverage(longArray, 10) << std::endl;

    return 0;
}
