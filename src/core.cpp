// Auto-generated module | 2026-05-12T06:19:03.544651
#include <iostream>
#include <vector>

int compute_963() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_963() << std::endl;
    return 0;
}
