// Auto-generated module | 2026-05-11T21:55:22.232131
#include <iostream>
#include <vector>

int compute_420() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_420() << std::endl;
    return 0;
}
