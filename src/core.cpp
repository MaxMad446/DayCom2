// Auto-generated module | 2026-05-11T22:15:57.415675
#include <iostream>
#include <vector>

int compute_180() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_180() << std::endl;
    return 0;
}
