// Auto-generated module | 2026-05-12T21:03:38.386419
#include <iostream>
#include <vector>

int compute_720() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_720() << std::endl;
    return 0;
}
