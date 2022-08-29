// Auto-generated module | 2026-05-14T06:18:23.672199
#include <iostream>
#include <vector>

int compute_136() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_136() << std::endl;
    return 0;
}
