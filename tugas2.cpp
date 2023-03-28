#include <iostream>
using namespace std;

int max (int a, int b ) {
    int max = a > b ? max = a : max = b;
    return max;
}

int min (int a, int b) {
    int min = a < b ? min = a : min = b;
    return min;
}

int maxArr(int arr[], int size) {
    int temp = 0;

    for (int i = 0; i < size; i++) {
        if (temp < arr[i]) {
            temp = arr[i];
        } else {
            temp = temp;
        }
    }
        return temp;
}

int minArr(int arr[], int size) {
    int temp = 9999;

    for (int i = 0; i < size; i++) {
        if (temp > arr[i]) {
            temp = arr[i];
        } else {
            temp = temp;
        }
    }
        return temp;
}

bool isEven(int x) {
    bool even = x % 2 == 0;
    return even;
}

bool isOdd(int x) {
    bool odd = x % 2 != 0;
    return odd;
}

bool isFactor (int x, int bil) {
    bool factor = x % bil == 0;
    return factor;
}

int sumEven (int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 ) {
            sum += arr[i];
        }
    }
    return sum;
}

int sumOdd (int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0 ) {
            sum += arr[i];
        }
    }
    return sum;
}

int main () {
    cout << max(3, 5) << endl;
    cout << min(4, 6) << endl;
    int myArr[] = {4, 3, 6, 7, 2};
    cout << maxArr(myArr, 5) << endl;
    cout << minArr(myArr, 5) << endl;
    cout << boolalpha;
    cout << isEven(8) << endl;
    cout << isOdd(7) << endl;
    cout << isFactor(8, 2) << endl;
    cout << sumEven(myArr, 5) << endl;
    cout << sumOdd(myArr, 5) << endl;
}