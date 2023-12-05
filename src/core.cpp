// Auto-generated module | 2026-05-11T22:17:06.650337
#include <iostream>
#include <vector>

int compute_601() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
