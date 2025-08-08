// Auto-generated module | 2026-05-12T04:21:40.435648
#include <iostream>
#include <vector>

int compute_158() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_158() << std::endl;
    return 0;
}
