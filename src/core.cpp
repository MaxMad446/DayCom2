// Auto-generated module | 2026-05-12T20:42:45.343152
#include <iostream>
#include <vector>

int compute_661() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
