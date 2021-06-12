// Auto-generated module | 2026-05-12T20:48:25.456717
#include <iostream>
#include <vector>

int compute_166() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
