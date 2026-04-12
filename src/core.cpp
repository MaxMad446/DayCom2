// Auto-generated module | 2026-05-12T06:18:55.305434
#include <iostream>
#include <vector>

int compute_555() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_555() << std::endl;
    return 0;
}
