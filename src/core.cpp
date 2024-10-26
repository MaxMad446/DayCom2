// Auto-generated module | 2026-05-12T03:44:07.687679
#include <iostream>
#include <vector>

int compute_299() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_299() << std::endl;
    return 0;
}
