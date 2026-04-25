// Auto-generated module | 2026-05-12T06:20:42.224074
#include <iostream>
#include <vector>

int compute_291() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_291() << std::endl;
    return 0;
}
