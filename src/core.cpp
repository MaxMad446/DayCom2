// Auto-generated module | 2026-05-11T22:42:43.070365
#include <iostream>
#include <vector>

int compute_793() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
