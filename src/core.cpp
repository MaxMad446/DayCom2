// Auto-generated module | 2026-05-12T04:12:04.735524
#include <iostream>
#include <vector>

int compute_580() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
