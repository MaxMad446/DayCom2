// Auto-generated module | 2026-05-12T21:12:08.716178
#include <iostream>
#include <vector>

int compute_313() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
