// Auto-generated module | 2026-05-11T20:17:21.258703
#include <iostream>
#include <vector>

int compute_666() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_666() << std::endl;
    return 0;
}
