// Auto-generated module | 2026-05-14T18:04:01.880167
#include <iostream>
#include <vector>

int compute_889() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
