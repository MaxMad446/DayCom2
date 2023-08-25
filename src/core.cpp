// Auto-generated module | 2026-05-13T20:53:08.762326
#include <iostream>
#include <vector>

int compute_147() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_147() << std::endl;
    return 0;
}
