// Auto-generated module | 2026-05-12T04:04:58.376354
#include <iostream>
#include <vector>

int compute_449() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
