// Auto-generated module | 2026-05-11T22:45:46.426456
#include <iostream>
#include <vector>

int compute_587() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
