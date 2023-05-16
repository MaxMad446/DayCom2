// Auto-generated module | 2026-05-13T20:38:08.198581
#include <iostream>
#include <vector>

int compute_370() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_370() << std::endl;
    return 0;
}
