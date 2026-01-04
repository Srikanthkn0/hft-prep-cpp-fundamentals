#include <iostream>
using namespace std;

int main() {
    int per[10];
    int idx = 0;

    for(int i = 1; i <= 500; i++) {
        int sum = 0;

        for(int j = 1; j <= i / 2; j++) {
            if(i % j == 0) {
                sum += j;
            }
        }

        if(sum == i) {
            per[idx++] = i;
        }
    }

    cout << "Perfect numbers between 1 to 500 are: ";
    for(int i = 0; i < idx; i++) {
        cout << per[i] << " ";
    }

    return 0;
}