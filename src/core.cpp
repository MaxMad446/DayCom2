// Auto-generated module | 2026-05-11T20:49:31.254190
#include <iostream>
#include <vector>

int compute_224() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
