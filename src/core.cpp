// Auto-generated module | 2026-05-12T21:20:27.794870
#include <iostream>
#include <vector>

int compute_653() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_653() << std::endl;
    return 0;
}
