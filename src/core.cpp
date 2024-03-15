// Auto-generated module | 2026-05-11T22:30:28.732645
#include <iostream>
#include <vector>

int compute_413() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
