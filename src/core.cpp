// Auto-generated module | 2026-05-11T20:03:05.691619
#include <iostream>
#include <vector>

int compute_338() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_338() << std::endl;
    return 0;
}
