// Auto-generated module | 2026-05-11T21:19:46.797245
#include <iostream>
#include <vector>

int compute_685() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_685() << std::endl;
    return 0;
}
