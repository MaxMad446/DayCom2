// Auto-generated module | 2026-05-13T20:51:49.331192
#include <iostream>
#include <vector>

int compute_147() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_147() << std::endl;
    return 0;
}
