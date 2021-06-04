// Auto-generated module | 2026-05-12T20:47:48.187099
#include <iostream>
#include <vector>

int compute_218() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_218() << std::endl;
    return 0;
}
