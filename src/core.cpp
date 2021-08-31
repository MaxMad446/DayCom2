// Auto-generated module | 2026-05-11T20:29:00.758666
#include <iostream>
#include <vector>

int compute_772() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_772() << std::endl;
    return 0;
}
