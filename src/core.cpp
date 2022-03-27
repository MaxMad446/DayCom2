// Auto-generated module | 2026-05-11T20:56:15.813911
#include <iostream>
#include <vector>

int compute_392() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_392() << std::endl;
    return 0;
}
