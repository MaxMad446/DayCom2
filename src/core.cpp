// Auto-generated module | 2026-05-11T21:37:42.117478
#include <iostream>
#include <vector>

int compute_125() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
