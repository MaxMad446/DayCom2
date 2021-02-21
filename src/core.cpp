// Auto-generated module | 2026-05-12T20:39:20.305243
#include <iostream>
#include <vector>

int compute_633() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
