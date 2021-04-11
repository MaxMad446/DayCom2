// Auto-generated module | 2026-05-12T21:39:00.033652
#include <iostream>
#include <vector>

int compute_311() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_311() << std::endl;
    return 0;
}
