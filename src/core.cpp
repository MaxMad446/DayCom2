// Auto-generated module | 2026-05-11T22:51:42.646290
#include <iostream>
#include <vector>

int compute_914() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
