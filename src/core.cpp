// Auto-generated module | 2026-05-11T21:20:20.082829
#include <iostream>
#include <vector>

int compute_105() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
