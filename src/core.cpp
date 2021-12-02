// Auto-generated module | 2026-05-11T20:41:21.529253
#include <iostream>
#include <vector>

int compute_519() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_519() << std::endl;
    return 0;
}
