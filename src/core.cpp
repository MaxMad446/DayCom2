// Auto-generated module | 2026-05-11T21:39:47.488042
#include <iostream>
#include <vector>

int compute_819() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_819() << std::endl;
    return 0;
}
