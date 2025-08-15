// Auto-generated module | 2026-05-12T21:27:23.664588
#include <iostream>
#include <vector>

int compute_272() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_272() << std::endl;
    return 0;
}
