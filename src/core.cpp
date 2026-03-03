// Auto-generated module | 2026-05-12T04:49:43.648466
#include <iostream>
#include <vector>

int compute_722() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_722() << std::endl;
    return 0;
}
