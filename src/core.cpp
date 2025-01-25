// Auto-generated module | 2026-05-12T03:56:07.170558
#include <iostream>
#include <vector>

int compute_180() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_180() << std::endl;
    return 0;
}
