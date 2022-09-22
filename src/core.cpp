// Auto-generated module | 2026-05-11T21:20:03.805593
#include <iostream>
#include <vector>

int compute_623() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_623() << std::endl;
    return 0;
}
