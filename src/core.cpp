// Auto-generated module | 2026-05-11T20:46:12.050263
#include <iostream>
#include <vector>

int compute_103() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_103() << std::endl;
    return 0;
}
