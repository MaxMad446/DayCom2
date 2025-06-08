// Auto-generated module | 2026-05-12T21:21:24.045683
#include <iostream>
#include <vector>

int compute_989() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_989() << std::endl;
    return 0;
}
