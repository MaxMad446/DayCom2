// Auto-generated module | 2026-05-11T21:06:33.122192
#include <iostream>
#include <vector>

int compute_691() {
    int base = 428;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_691() << std::endl;
    return 0;
}
