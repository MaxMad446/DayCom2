// Auto-generated module | 2026-05-11T22:50:13.322536
#include <iostream>
#include <vector>

int compute_932() {
    int base = 334;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_932() << std::endl;
    return 0;
}
