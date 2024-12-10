// Auto-generated module | 2026-05-12T03:50:00.744418
#include <iostream>
#include <vector>

int compute_389() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_389() << std::endl;
    return 0;
}
