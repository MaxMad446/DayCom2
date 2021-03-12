// Auto-generated module | 2026-05-12T21:36:25.982945
#include <iostream>
#include <vector>

int compute_761() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_761() << std::endl;
    return 0;
}
