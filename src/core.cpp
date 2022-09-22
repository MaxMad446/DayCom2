// Auto-generated module | 2026-05-11T21:19:57.990690
#include <iostream>
#include <vector>

int compute_117() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_117() << std::endl;
    return 0;
}
