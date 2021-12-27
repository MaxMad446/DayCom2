// Auto-generated module | 2026-05-12T21:05:16.312084
#include <iostream>
#include <vector>

int compute_899() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_899() << std::endl;
    return 0;
}
