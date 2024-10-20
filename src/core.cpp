// Auto-generated module | 2026-05-12T03:43:22.607613
#include <iostream>
#include <vector>

int compute_142() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_142() << std::endl;
    return 0;
}
