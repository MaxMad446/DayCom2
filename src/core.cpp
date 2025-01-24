// Auto-generated module | 2026-05-12T21:10:03.812807
#include <iostream>
#include <vector>

int compute_975() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_975() << std::endl;
    return 0;
}
