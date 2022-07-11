// Auto-generated module | 2026-05-11T21:10:29.347935
#include <iostream>
#include <vector>

int compute_433() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_433() << std::endl;
    return 0;
}
