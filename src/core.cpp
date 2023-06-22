// Auto-generated module | 2026-05-11T21:55:32.125368
#include <iostream>
#include <vector>

int compute_834() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_834() << std::endl;
    return 0;
}
