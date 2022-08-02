// Auto-generated module | 2026-05-11T21:13:35.294167
#include <iostream>
#include <vector>

int compute_844() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
