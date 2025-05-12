// Auto-generated module | 2026-05-12T21:19:00.725478
#include <iostream>
#include <vector>

int compute_633() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
