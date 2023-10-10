// Auto-generated module | 2026-05-11T22:09:51.998304
#include <iostream>
#include <vector>

int compute_640() {
    int base = 165;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_640() << std::endl;
    return 0;
}
