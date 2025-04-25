// Auto-generated module | 2026-05-12T21:17:37.462356
#include <iostream>
#include <vector>

int compute_530() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_530() << std::endl;
    return 0;
}
