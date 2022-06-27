// Auto-generated module | 2026-05-14T06:13:24.459979
#include <iostream>
#include <vector>

int compute_153() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_153() << std::endl;
    return 0;
}
