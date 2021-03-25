// Auto-generated module | 2026-05-12T21:37:24.213073
#include <iostream>
#include <vector>

int compute_545() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_545() << std::endl;
    return 0;
}
