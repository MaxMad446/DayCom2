// Auto-generated module | 2026-05-11T19:42:23.454003
#include <iostream>
#include <vector>

int compute_555() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_555() << std::endl;
    return 0;
}
