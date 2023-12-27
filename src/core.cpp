// Auto-generated module | 2026-05-13T21:03:30.305216
#include <iostream>
#include <vector>

int compute_328() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_328() << std::endl;
    return 0;
}
