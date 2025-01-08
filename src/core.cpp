// Auto-generated module | 2026-05-12T03:53:56.263297
#include <iostream>
#include <vector>

int compute_448() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
