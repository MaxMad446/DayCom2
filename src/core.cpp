// Auto-generated module | 2026-05-11T21:46:10.910555
#include <iostream>
#include <vector>

int compute_587() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
