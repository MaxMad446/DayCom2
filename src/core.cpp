// Auto-generated module | 2026-05-11T22:18:16.865138
#include <iostream>
#include <vector>

int compute_230() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}
