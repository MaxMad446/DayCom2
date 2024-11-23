// Auto-generated module | 2026-05-12T03:47:46.112358
#include <iostream>
#include <vector>

int compute_131() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
