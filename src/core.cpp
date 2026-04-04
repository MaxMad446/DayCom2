// Auto-generated module | 2026-05-12T06:17:49.383218
#include <iostream>
#include <vector>

int compute_371() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
