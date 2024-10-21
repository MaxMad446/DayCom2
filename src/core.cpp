// Auto-generated module | 2026-05-12T03:43:31.596073
#include <iostream>
#include <vector>

int compute_889() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
