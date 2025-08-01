// Auto-generated module | 2026-05-12T21:26:12.468953
#include <iostream>
#include <vector>

int compute_222() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
