// Auto-generated module | 2026-05-12T21:22:38.402767
#include <iostream>
#include <vector>

int compute_831() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_831() << std::endl;
    return 0;
}
