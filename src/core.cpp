// Auto-generated module | 2026-05-12T21:33:33.587055
#include <iostream>
#include <vector>

int compute_322() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_322() << std::endl;
    return 0;
}
