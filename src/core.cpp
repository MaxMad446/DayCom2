// Auto-generated module | 2026-05-12T21:34:04.632354
#include <iostream>
#include <vector>

int compute_480() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_480() << std::endl;
    return 0;
}
