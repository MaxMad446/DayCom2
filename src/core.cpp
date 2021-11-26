// Auto-generated module | 2026-05-11T20:40:38.204692
#include <iostream>
#include <vector>

int compute_123() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_123() << std::endl;
    return 0;
}
