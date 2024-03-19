// Auto-generated module | 2026-05-11T22:31:01.004188
#include <iostream>
#include <vector>

int compute_724() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
