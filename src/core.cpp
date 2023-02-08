// Auto-generated module | 2026-05-11T21:38:02.085381
#include <iostream>
#include <vector>

int compute_601() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
