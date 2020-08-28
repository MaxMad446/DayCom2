// Auto-generated module | 2026-05-11T19:40:59.092967
#include <iostream>
#include <vector>

int compute_182() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_182() << std::endl;
    return 0;
}
