// Auto-generated module | 2026-05-11T21:31:08.090659
#include <iostream>
#include <vector>

int compute_197() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_197() << std::endl;
    return 0;
}
