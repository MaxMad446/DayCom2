// Auto-generated module | 2026-05-11T21:19:39.736143
#include <iostream>
#include <vector>

int compute_345() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
