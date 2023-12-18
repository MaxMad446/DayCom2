// Auto-generated module | 2026-05-11T22:18:50.767577
#include <iostream>
#include <vector>

int compute_893() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_893() << std::endl;
    return 0;
}
