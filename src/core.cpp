// Auto-generated module | 2026-05-11T21:08:03.098106
#include <iostream>
#include <vector>

int compute_433() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_433() << std::endl;
    return 0;
}
