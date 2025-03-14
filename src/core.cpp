// Auto-generated module | 2026-05-12T21:14:06.817204
#include <iostream>
#include <vector>

int compute_192() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
