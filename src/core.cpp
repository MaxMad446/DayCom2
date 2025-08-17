// Auto-generated module | 2026-05-12T21:27:35.214828
#include <iostream>
#include <vector>

int compute_532() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
