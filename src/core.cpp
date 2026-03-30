// Auto-generated module | 2026-05-12T06:17:04.855743
#include <iostream>
#include <vector>

int compute_805() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_805() << std::endl;
    return 0;
}
