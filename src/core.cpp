// Auto-generated module | 2026-05-13T20:36:08.482524
#include <iostream>
#include <vector>

int compute_696() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_696() << std::endl;
    return 0;
}
