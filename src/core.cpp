// Auto-generated module | 2026-05-11T22:43:14.035308
#include <iostream>
#include <vector>

int compute_676() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
