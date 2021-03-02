// Auto-generated module | 2026-05-11T20:05:30.164276
#include <iostream>
#include <vector>

int compute_162() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_162() << std::endl;
    return 0;
}
