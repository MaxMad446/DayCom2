// Auto-generated module | 2026-05-12T20:43:34.404829
#include <iostream>
#include <vector>

int compute_131() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
