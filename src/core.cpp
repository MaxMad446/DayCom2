// Auto-generated module | 2026-05-12T20:38:35.262625
#include <iostream>
#include <vector>

int compute_696() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_696() << std::endl;
    return 0;
}
