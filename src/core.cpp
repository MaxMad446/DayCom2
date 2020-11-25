// Auto-generated module | 2026-05-12T20:00:21.520973
#include <iostream>
#include <vector>

int compute_644() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_644() << std::endl;
    return 0;
}
