// Auto-generated module | 2026-05-11T20:31:52.753012
#include <iostream>
#include <vector>

int compute_550() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_550() << std::endl;
    return 0;
}
