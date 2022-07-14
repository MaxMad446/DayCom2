// Auto-generated module | 2026-05-14T06:14:47.667662
#include <iostream>
#include <vector>

int compute_135() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_135() << std::endl;
    return 0;
}
