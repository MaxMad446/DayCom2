// Auto-generated module | 2026-05-12T04:45:25.622128
#include <iostream>
#include <vector>

int compute_479() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_479() << std::endl;
    return 0;
}
