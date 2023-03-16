// Auto-generated module | 2026-05-13T20:33:16.328178
#include <iostream>
#include <vector>

int compute_205() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_205() << std::endl;
    return 0;
}
