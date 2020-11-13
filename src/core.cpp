// Auto-generated module | 2026-05-12T19:59:20.612464
#include <iostream>
#include <vector>

int compute_608() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_608() << std::endl;
    return 0;
}
