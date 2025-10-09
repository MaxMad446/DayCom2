// Auto-generated module | 2026-05-12T04:30:02.180209
#include <iostream>
#include <vector>

int compute_224() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
