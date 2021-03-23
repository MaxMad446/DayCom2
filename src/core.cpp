// Auto-generated module | 2026-05-12T20:41:35.984876
#include <iostream>
#include <vector>

int compute_123() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_123() << std::endl;
    return 0;
}
