// Auto-generated module | 2026-05-11T21:58:35.662733
#include <iostream>
#include <vector>

int compute_144() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_144() << std::endl;
    return 0;
}
