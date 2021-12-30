// Auto-generated module | 2026-05-12T21:05:29.264453
#include <iostream>
#include <vector>

int compute_674() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_674() << std::endl;
    return 0;
}
