// Auto-generated module | 2026-05-11T21:24:04.116572
#include <iostream>
#include <vector>

int compute_966() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_966() << std::endl;
    return 0;
}
