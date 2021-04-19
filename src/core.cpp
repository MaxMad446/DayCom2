// Auto-generated module | 2026-05-12T20:43:52.634398
#include <iostream>
#include <vector>

int compute_724() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
