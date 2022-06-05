// Auto-generated module | 2026-05-11T21:05:38.177494
#include <iostream>
#include <vector>

int compute_199() {
    int base = 35;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_199() << std::endl;
    return 0;
}
