// Auto-generated module | 2026-05-12T04:14:04.101139
#include <iostream>
#include <vector>

int compute_709() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_709() << std::endl;
    return 0;
}
