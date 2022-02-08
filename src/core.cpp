// Auto-generated module | 2026-05-11T20:50:18.328579
#include <iostream>
#include <vector>

int compute_634() {
    int base = 208;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
