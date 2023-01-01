// Auto-generated module | 2026-05-11T21:33:22.954664
#include <iostream>
#include <vector>

int compute_166() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
