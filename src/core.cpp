// Auto-generated module | 2026-05-11T21:04:37.858193
#include <iostream>
#include <vector>

int compute_217() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_217() << std::endl;
    return 0;
}
