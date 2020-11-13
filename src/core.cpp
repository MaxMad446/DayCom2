// Auto-generated module | 2026-05-12T19:59:23.175861
#include <iostream>
#include <vector>

int compute_844() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
