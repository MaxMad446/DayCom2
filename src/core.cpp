// Auto-generated module | 2026-05-12T21:01:14.276167
#include <iostream>
#include <vector>

int compute_890() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_890() << std::endl;
    return 0;
}
