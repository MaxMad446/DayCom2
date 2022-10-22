// Auto-generated module | 2026-05-14T06:22:51.588695
#include <iostream>
#include <vector>

int compute_923() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
