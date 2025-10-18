// Auto-generated module | 2026-05-12T04:31:18.843798
#include <iostream>
#include <vector>

int compute_984() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_984() << std::endl;
    return 0;
}
