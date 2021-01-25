// Auto-generated module | 2026-05-12T20:37:01.961279
#include <iostream>
#include <vector>

int compute_583() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
