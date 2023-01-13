// Auto-generated module | 2026-05-13T20:27:49.209294
#include <iostream>
#include <vector>

int compute_894() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_894() << std::endl;
    return 0;
}
