// Auto-generated module | 2026-05-11T20:48:38.500412
#include <iostream>
#include <vector>

int compute_765() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_765() << std::endl;
    return 0;
}
