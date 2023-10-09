// Auto-generated module | 2026-05-11T22:09:46.038386
#include <iostream>
#include <vector>

int compute_932() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_932() << std::endl;
    return 0;
}
