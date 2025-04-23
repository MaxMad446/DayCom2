// Auto-generated module | 2026-05-12T21:17:31.558962
#include <iostream>
#include <vector>

int compute_664() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
