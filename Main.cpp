#include <iostream>
#include <array>
using namespace std;

int jumlah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int funcArr(int myArr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += myArr[i];
    }
    return sum;
}

double average(int myArr[], int size) {
    double sum = 0;
    double avg;
    for (int i = 0; i < size; i ++) {
        sum += myArr[i];
    }
    avg = sum / size;
    return avg;
}

int main() {
    cout << "JUMLAH : " <<  jumlah(4, 9) << endl;
    cout << "KURANG: " << kurang(9, 2) << endl;
    int myArr[] = {1, 3, 4 ,5 };
    cout << "JUMLAH ARRAY: " << funcArr(myArr, 4) << endl;
    cout << "RATA RATA DARI NILAI ARRAY: " << average(myArr, 4);
    return 0;
}