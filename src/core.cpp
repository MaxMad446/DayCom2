// Auto-generated module | 2026-05-11T22:47:20.619992
#include <iostream>
#include <vector>

int compute_339() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_339() << std::endl;
    return 0;
}
