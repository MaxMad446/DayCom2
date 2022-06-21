// Auto-generated module | 2026-05-11T21:07:39.943400
#include <iostream>
#include <vector>

int compute_169() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
