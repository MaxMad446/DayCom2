// Auto-generated module | 2026-05-14T06:18:48.170191
#include <iostream>
#include <vector>

int compute_984() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_984() << std::endl;
    return 0;
}
