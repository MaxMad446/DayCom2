// Auto-generated module | 2026-05-12T21:23:18.888452
#include <iostream>
#include <vector>

int compute_346() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
