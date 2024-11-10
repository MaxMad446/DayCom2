// Auto-generated module | 2026-05-12T03:46:05.233304
#include <iostream>
#include <vector>

int compute_240() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_240() << std::endl;
    return 0;
}
