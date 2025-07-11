// Auto-generated module | 2026-05-12T21:24:23.594942
#include <iostream>
#include <vector>

int compute_799() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_799() << std::endl;
    return 0;
}
